#include"snake.h"
#include<stdlib.h>
void logic()
{

	int previousX, previousY;
	previousX = tail_x[lengthoftail - 1];
	previousY = tail_y[lengthoftail - 1];
	for (int a = lengthoftail - 1;a > 0;a--)
	{
		tail_x[a] = tail_x[a - 1];
		tail_y[a] = tail_y[a - 1];

	}
	tail_x[0] = snakehand_x;
	tail_y[0] = snakehand_y;
	move();
	if (snakehand_x == fruit_x && snakehand_y == fruit_y)
	{
		lengthoftail++;
		tail_x[lengthoftail - 1] = previousX;
		tail_y[lengthoftail - 1] = previousY;
		fruit_x = rand() % (length_x-1)+1;
		fruit_y = rand() % (length_y-1)+1;
	}



	if (snakehand_x == length_x || snakehand_x == 0 || snakehand_y == length_y || snakehand_y == 0)
		end = 0;
	if (lengthoftail > 0)
	{
		for (int a = lengthoftail - 1;a >= 0;a--)
		{
			if (snakehand_x == tail_x[a] && snakehand_y == tail_y[a])
				end = 0;
		}
	}
}
		