/* 
Write a c++ program to display concentric circles
*/

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
 
int main(){
   int gd = DETECT,gm;
   int x ,y;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   
   x = getmaxx()/2;
   y = getmaxy()/2;
 
  
   setcolor(YELLOW);
   circle(x, y, 0);
   setcolor(WHITE);
   circle(x, y, 30);
   setcolor(GREEN);
   circle(x, y, 60);
   setcolor(YELLOW);
   circle(x, y, 90);
   setcolor(RED);
   circle(x, y, 120);
 
   getch();
   closegraph();
   return 0;
}
