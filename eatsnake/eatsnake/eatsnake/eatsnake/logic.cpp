#include"snake.h"
#include<stdlib.h>
void logic()
{

	int previousX=snakehand.x, previousY=snakehand.y;
	if (lengthoftail > 0)
	{previousX =  tail.x[lengthoftail - 1];
	 previousY =  tail.y[lengthoftail - 1];
		for (int a = lengthoftail - 1;a > 0;a--)
		{
			 tail.x[a] =  tail.x[a - 1];
			 tail.y[a] =  tail.y[a - 1];

		}
	}
	 tail.x[0] =  snakehand.x;
	 tail.y[0] =  snakehand.y;
	move();
	if (snakehand.x ==  fruit.x && snakehand.y ==  fruit.y)
	{
		lengthoftail++;
		 tail.x[lengthoftail - 1] = previousX;
		 tail.y[lengthoftail - 1] = previousY;
		 fruit.x = rand() % (length_x-1)+1;
		 fruit.y = rand() % (length_y-1)+1;
		 score++;
		 makefruit();
		}



	if (  snakehand.x == length_x ||  snakehand.x == 0 ||  snakehand.y == length_y ||  snakehand.y == 0)
		end = 0;
	if (lengthoftail > 0)
	{
		for (int a = lengthoftail - 1;a >= 0;a--)
		{
			if ( snakehand.x ==  tail.x[a] &&  snakehand.y ==  tail.y[a])
				end = 0;
		}
	}
}
		