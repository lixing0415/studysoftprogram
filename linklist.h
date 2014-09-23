/**************************************************************************************************/
/* Copyright (C) mc2lab.com, SSE@USTC, 2014-2015                                                  */
/*                                                                                                */
/*  FILE NAME             :  linklist.h                                                           */
/*  PRINCIPAL AUTHOR      :  Lixing (Come from Mengning's teaching videoes)                       */
/*  SUBSYSTEM NAME        :  linklist                                                             */
/*  MODULE NAME           :  linklist function                                                    */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/22                                                           */
/*  DESCRIPTION           :  This is a linklist head program                                      */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Writed by Lixing, after studying Mengning's teaching videoes,2014/09/22
 *
 */

/* data struct and its operations */

typedef struct CmdNode
{
    char*   cmd;
    char*   desc;
    int     (*handler)();
    struct  CmdNode *next;
}tCmdNode;

/* find a cmd in the linklist and return the cmdnode pointer */
tCmdNode* FindCmd(tCmdNode * head, char * cmd);

/* show all cmd in listlist */
int ShowAllCmd(tCmdNode * head);
