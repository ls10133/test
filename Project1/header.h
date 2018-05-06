#pragma once
#include<Windows.h>
void gotoxy(const int &x, const int &y) //定位到第x行的第y列
{
	int xx = 0x0b;
	HANDLE hOutput;
	COORD loc;
	loc.X = y;
	loc.Y = x;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, loc);
}
