#include<conio.h>
#include"snake.h"
void move()
{
	if (_kbhit())
	{
		switch ((_getch()))
		{
		case'w':
			direction='w';
			break;
		case's':
			direction='s';
			break;
		case'a':
			direction='a';
			break;
		case'd':
			direction='d';
			break;
		}
		
	}
	switch (direction)
	{
	case'w':
		snakehand_y--;
		break;
	case's':
		snakehand_y++;
		break;
	case'a':
		snakehand_x--;
		break;
	case'd':
		snakehand_x++;
		break;
	}

}