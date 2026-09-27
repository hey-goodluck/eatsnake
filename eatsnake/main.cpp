#include"snake.h"
#include<stdio.h>
#include<Windows.h>
struct{ int x;int y; } snakehand;
struct{ int x[maxlengthoftail] = {0};int y[maxlengthoftail] = {0}; }tail;
struct{ int x; int y; } fruit;
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