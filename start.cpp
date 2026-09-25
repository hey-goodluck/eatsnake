#include<stdlib.h>
#include"snake.h"
#include<time.h>
void start() {
	snakehand_x = length_x / 2;
	snakehand_y = length_y / 2;
	srand((unsigned int)time(NULL));

	fruit_x = rand() % (length_x - 1) + 1;
	fruit_y = rand() % (length_y - 1) + 1;
}