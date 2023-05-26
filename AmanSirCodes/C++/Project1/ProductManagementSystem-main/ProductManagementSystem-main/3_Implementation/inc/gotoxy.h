/**
 * @file gotoxy.h
 * @author Aditi Iyer
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __GOTOXY_H
#define __GOTOXY_H

#include "op.h"


void gotoxy(short x, short y)
{
	COORD pos ={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}  

#endif