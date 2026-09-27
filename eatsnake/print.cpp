#include<stdio.h>
#include"snake.h"
#include<windows.h>
void print()
{
	int x = 0, y = 0, i = 0;
	int isprintf = 1;
	for (y=0;y< length_y;y++)
	{
		for (x=0;x< length_x;x++)
		{
			isprintf = 1;
			if (x == 0 || (y == 0 && x != length_x - 1) || y == length_y - 1)
			{
				printf("#");
				isprintf = 0;
			}
			else if (x == length_x - 1)
			{
				printf("#\n");
				isprintf = 0;
			}
			else if (x == struct snakehand.x && y == struct snakehand.y)
			{
				printf("0");
				isprintf = 0;
			}
			else if (x == struct fruit.x && y == struct fruit.y)
			{
				printf("f");
				isprintf = 0;
			}
				for (i = 0;i < lengthoftail;i++)
			{
				if (x == struct tail.x[i] && y == struct tail.y[i])
				{
					printf("o");
					isprintf = 0;
				}
			}
			if(isprintf==1)
				printf(" ");
				


		}
	}

}
