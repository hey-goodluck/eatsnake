#include<stdlib.h>
#include"snake.h"
#include<time.h>
void start() {
	struct snakehand.x = length_x / 2;
	struct snakehand.y = length_y / 2;
	srand((unsigned int)time(NULL));

	struct fruit.x = rand() % (length_x - 1) + 1;
	struct fruit.y = rand() % (length_y - 1) + 1;
}