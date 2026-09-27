#define _CRT_SECURE_NO_WARNINGS
#include"snake.h"
#include<stdio.h>
#include<Windows.h>
 a  snakehand;
 b  tail;
 c  fruit;
 int lengthoftail = 0;
 int end = 1;
 char direction = 'd';
 int score = 0,max=0;
 FILE *fp=NULL;
int main()
{
	start();
	while (end)
	{
		logic();
		print();
		Sleep(200);
		system("cls");
		
    }
	printf("game over,score: %d\n", score);
	fp = fopen("score.txt", "r");
	if (fp == NULL)
	{
		printf("Error opening file!\n");
		return 1;
	}
	fscanf(fp, "max=%d\n", &max);
	fclose(fp);
		if (score > max)
		{
			fp = fopen("score.txt", "w");
			fprintf(fp, "max=%d\n", score);
			max = score;
			fclose(fp);
		}
	printf("max score: %d\n", max);
	return 0;
}