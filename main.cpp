#include"snake.h"
#include<stdio.h>
#include<Windows.h>
int snakehand_x, snakehand_y;
int tail_x[maxlengthoftail] = { 0 }, tail_y[maxlengthoftail] = { 0 };
int fruit_x, fruit_y;
 int lengthoftail = 0;
 int end = 1;
 char direction = 'd';
int main()
{
	start();
	while (end)
	{
		logic();
		print();
		Sleep(200);
		system("cls");
		
    }
	printf("ÓÎÏ·½áÊø");
	return 0;
}