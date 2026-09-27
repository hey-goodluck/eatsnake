#include"snake.h"
#include<stdio.h>
#include<Windows.h>
 a  snakehand;
 b  tail;
 c  fruit;
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