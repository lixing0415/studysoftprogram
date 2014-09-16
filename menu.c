
/**************************************************************************************************/
/* Copyright (C) SA14226150, LiXing@USTC, 2014-2015                                               */
/*                                                                                                */
/*  FILE NAME             :  menu.c                                                               */
/*  PRINCIPAL AUTHOR      :  LiXing                                                               */
/*  SUBSYSTEM NAME        :  menu                                                                 */
/*  MODULE NAME           :  menu                                                                 */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/16                                                           */
/*  DESCRIPTION           :  This is a menu program                                               */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Created by LiXing, 2014/09/16
 *
 */


#include <stdio.h>
#include <stdlib.h>

int Help();

#define CMD_MAX_LEN 128
#define DESC_LEN    1024
#define CMD_NUM     10

/* data struct and its operations */

typedef struct CmdNode
{
    char*   cmd;
    char*   desc;
    int     (*handler)();
    struct  CmdNode *next;
} tCmdNode;

/* find a cmd in the linklist and return the cmdnode pointer */

tCmdNode* FindCmd(tCmdNode * head, char * cmd)
{
    if(head == NULL || cmd == NULL)
    {
        return NULL;
    }
    tCmdNode *p = head;
    while(p != NULL)
    {
        if(!strcmp(p->cmd, cmd))
        {
            return p;     
            break;
        }
        p = p->next;
    }
    return NULL;
}

/* show all cmd in listlist */

int ShowAllCmd(tCmdNode * head)
{
    tCmdNode *p = head;
    printf("Menu List:\n");
    while(p != NULL)
    {
        printf("%s - %s\n", p->cmd, p->desc);
        p = p->next;
    }
    return 0;
}

/* menu program */

static tCmdNode head[] =
{
    {"help", "This is a HELP CMD!", Help, &head[1]},
    {"version", "This is program v1.1", NULL, NULL}
};

main()
{ 
   /* cmd line begins */
    while(1)
    {
        char cmd[CMD_MAX_LEN];
        printf("Please input a cmd: > ");
        scanf("%s", cmd);
        tCmdNode *p = FindCmd(head, cmd);
        if( p == NULL)
        {
            printf("This is a wrong cmd!\n ");
            continue;
        }
        printf("%s - %s\n", p->cmd, p->desc); 
        if(p->handler != NULL) 
        { 
            p->handler();
        }
    }
}

int Help()
{
    ShowAllCmd(head);
    return 0; 
}
