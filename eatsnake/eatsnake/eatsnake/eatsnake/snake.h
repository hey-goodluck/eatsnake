#pragma once
#define length_x 80
#define length_y 30//²»ÒªÌ«´ó
#define maxlengthoftail 100
 struct a { int x;int y; } ;	
 struct b { int x[maxlengthoftail] = {0};int y[maxlengthoftail] = {0}; };
struct c{ int x; int y; } ;
extern a  snakehand;
extern b  tail;
extern c  fruit;
extern int lengthoftail;
extern int end;
extern char direction;
extern int score ;
void start();
void move();
void logic();
void print();
void makefruit();
//hello

