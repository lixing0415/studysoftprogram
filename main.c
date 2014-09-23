
/**************************************************************************************************/
/* Copyright (C) mc2lab.com, SSE@USTC, 2014-2015                                                  */
/*                                                                                                */
/*  FILE NAME             :  main.c                                                               */
/*  PRINCIPAL AUTHOR      :  Lixing                                                               */
/*  SUBSYSTEM NAME        :  main                                                                 */
/*  MODULE NAME           :  main function                                                        */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/22                                                           */
/*  DESCRIPTION           :  This is a main source program                                        */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Created by Lixing, after studying Mengning's teaching videoes,2014/09/22
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"


int main()
{ 
    printf("Welcome to use this program!\n");
    
    /* cmd line begins */
    while(1)
    {
        char cmd[CMD_MAX_LEN];
        printf("Please input a cmd: > ");
        scanf("%s", cmd);
        if(judgecmd(cmd) == 0)
        {
            continue;
        }
        else if(judgecmd(cmd) == -1)
        {
            break;
        }
        else
        {
            menu(cmd);
        }
    }
    return 0;
}


