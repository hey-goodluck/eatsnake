#include"snake.h"
#include<stdlib.h>
void logic()
{

	int previousX, previousY;
	if (lengthoftail > 0)
	{previousX = struct tail.x[lengthoftail - 1];
	 previousY = struct tail.y[lengthoftail - 1];
		for (int a = lengthoftail - 1;a > 0;a--)
		{
			struct tail.x[a] = struct tail.x[a - 1];
			struct tail.y[a] = struct tail.y[a - 1];

		}
	}
	struct tail.x[0] = struct snakehand.x;
	struct tail.y[0] = struct snakehand.y;
	move();
	if (snakehand.x == struct fruit.x && snakehand.y == struct fruit.y)
	{
		lengthoftail++;
		struct tail.x[lengthoftail - 1] = previousX;
		struct tail.y[lengthoftail - 1] = previousY;
		struct fruit.x = rand() % (length_x-1)+1;
		struct fruit.y = rand() % (length_y-1)+1;
		for(int a=0;a<lengthoftail;a++)
			if (struct fruit.x == struct tail.x[a] && struct fruit.y == struct tail.y[a])
			{
				struct fruit.x = rand() % (length_x - 1) + 1;
				struct fruit.y = rand() % (length_y - 1) + 1;
			} 
	}



	if ( struct snakehand.x == length_x || struct snakehand.x == 0 || struct snakehand.y == length_y || struct snakehand.y == 0)
		end = 0;
	if (lengthoftail > 0)
	{
		for (int a = lengthoftail - 1;a >= 0;a--)
		{
			if (struct snakehand.x == struct tail.x[a] && struct snakehand.y == struct tail.y[a])
				end = 0;
		}
	}
}
		