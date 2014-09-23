
/**************************************************************************************************/
/* Copyright (C) mc2lab.com, SSE@USTC, 2014-2015                                                  */
/*                                                                                                */
/*  FILE NAME             :  menu.c                                                               */
/*  PRINCIPAL AUTHOR      :  Lixing (Come from Mengning's teaching videoes)                       */
/*  SUBSYSTEM NAME        :  menu                                                                 */
/*  MODULE NAME           :  menu function                                                        */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/22                                                           */
/*  DESCRIPTION           :  This is a menu source program                                        */
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

int Help();
int Quit();
int V();

/* menu program */
static tCmdNode head[] = 
{
    {"help", "This is help cmd!", Help, &head[1]},
    {"version", "This is the menu program v2.0!", V, &head[2]},
    {"quit", "This is going to quit the program!", Quit, NULL}
};

int judgecmd(char * cmd)
{
    tCmdNode *p = FindCmd(head, cmd);
    if(p == NULL)
    {
        printf("This is a wrong cmd!\n ");
        return 0;
    }
    else if(p->handler == Quit)
    {
        return -1;
    }
}
int menu(char * cmd)
{ 
    tCmdNode *p = FindCmd(head, cmd);
    if(p->handler == Help) 
    { 
        p->handler();
    }
    else
    {
        printf("%s - %s\n", p->cmd, p->desc);
    }
    return 0;
}

int Help()
{
    ShowAllCmd(head);
    return 0;
}

int Quit()
{
    return 0;
}

int V()
{
    return 0;
}
