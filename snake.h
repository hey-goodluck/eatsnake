#pragma once
#define length_x 80
#define length_y 30//²»ÒªÌ«´ó
#define maxlengthoftail 100
extern int snakehand_x, snakehand_y;
extern int tail_x[maxlengthoftail], tail_y[maxlengthoftail] ;
extern int fruit_x, fruit_y;
extern int lengthoftail ;
extern int end;
extern char direction;
void start();
void move();
void logic();
void print();
//hello

