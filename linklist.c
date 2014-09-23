/**************************************************************************************************/
/* Copyright (C) mc2lab.com, SSE@USTC, 2014-2015                                                  */
/*                                                                                                */
/*  FILE NAME             :  linklist.c                                                           */
/*  PRINCIPAL AUTHOR      :  Lixing (Come from Mengning's teaching videoes)                       */
/*  SUBSYSTEM NAME        :  linklist                                                             */
/*  MODULE NAME           :  linklist function                                                    */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/21                                                           */
/*  DESCRIPTION           :  This is a linklist source program                                    */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Writed by Lixing, after studying Mengning's teaching videoes,2014/09/22
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

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

