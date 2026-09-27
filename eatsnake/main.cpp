#include"snake.h"
#include<stdio.h>
#include<Windows.h>
structure
{ int x, y } snakehand;
structure{int x[maxlengthoftail]={0},y[maxlengthoftail]={0}} tail;
structure{int x, y} fruit;
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
	printf("game over");
	return 0;
}