#include<conio.h>
#include"snake.h"
void move()
{
	char newdirection=direction;
	if (_kbhit())
	{
		switch ((_getch()))
		{
		case'w':
			newdirection='w';
			break;
		case's':
			newdirection='s';
			break;
		case'a':
			newdirection='a';
			break;
		case'd':
			newdirection='d';
			break;
		}
		
	}
	
	if (!((direction=='a'&&newdirection=='d')||( direction=='d'&&newdirection == 'a')||
		(direction=='s'&&newdirection =='w')||(direction == 'w'&&newdirection == 's')))
		direction = newdirection;
	switch(direction)
	{
	case'w':
		snakehand.y--;
		break;
	case's':
		snakehand.y++;
		break;
	case'a':
		snakehand.x--;
		break;
	case'd':
		snakehand.x++;
		break;
	}

}