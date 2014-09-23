
/**************************************************************************************************/
/* Copyright (C) mc2lab.com, SSE@USTC, 2014-2015                                                  */
/*                                                                                                */
/*  FILE NAME             :  menu.h                                                               */
/*  PRINCIPAL AUTHOR      :  Lixing (Come from Mengning's teaching videoes)                       */
/*  SUBSYSTEM NAME        :  menu                                                                 */
/*  MODULE NAME           :  menu function                                                        */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/22                                                           */
/*  DESCRIPTION           :  This is a menu head program                                          */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Writed by Lixing, after studying Mengning's teaching videoes,2014/09/22
 *
 */
#define DESC_LEN   1024
#define CMD_NUM	     10
#define CMD_MAX_LEN 128

int judgecmd(char * cmd);
int menu(char * cmd);
