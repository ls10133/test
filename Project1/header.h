#pragma once
#include<Windows.h>
void gotoxy(const int &x, const int &y) //��λ����x�еĵ�y��
{
	int xx = 0x0b;
	HANDLE hOutput;
	COORD loc;
	loc.X = y;
	loc.Y = x;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, loc);
}
