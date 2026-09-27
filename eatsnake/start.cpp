#include<stdlib.h>
#include"snake.h"
#include<time.h>
void start() {
	snakehand.x = length_x / 2;
	snakehand.y = length_y / 2;
	srand((unsigned int)time(NULL));

	fruit.x = rand() % (length_x - 1) + 1;
	fruit.y = rand() % (length_y - 1) + 1;
}