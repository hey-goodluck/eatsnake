#include <stdlib.h>
#include "snake.h"
void makefruit()
{
	fruit.x = rand() % (length_x - 1) + 1;
	fruit.y = rand() % (length_y - 1) + 1;
	while (1)
{
	int flag = 0;
	for (int a = 0;a < lengthoftail;a++)
		if ((fruit.x == tail.x[a] && fruit.y == tail.y[a] )|| (fruit.x == snakehand.x && fruit.y == snakehand.y
			)|| fruit.x == length_x - 1 || fruit.y == length_y - 1)
			flag = 1;
	if (flag == 0)
		break;
	fruit.x = rand() % (length_x - 1) + 1;
	fruit.y = rand() % (length_y - 1) + 1;
}
}