/*
Write a program to display the following  alphabets using the inbuilt function of computer graphics by plotting co-ordinates. 

A  E F H I  K L M N    T V W X Y Z

*/


#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{

   int gdriver = DETECT, gmode, errorcode;

   initgraph(&gdriver, &gmode, "C:\\TC\\bgi");



   line(75,30,50,80);line(75,30,100,80);line(63,55,88,55);

    line(120,30,160,30);line(120,30,120,80);line(120,55,150,55);line(120,80,160,80);

   line(190,30,230,30);line(190,55,220,55);line(190,30,190,80);

   line(260,30,260,80);line(260,55,300,55);line(300,30,300,80);

   line(320,30,360,30);line(340,30,340,80);line(320,80,360,80);

   line(50,110,50,160);line(50,135,80,110);line(50,135,80,160);

   line(120,110,120,160);line(120,160,160,160);

    line(190,110,190,160);line(190,110,215,135);line(215,135,240,110);
    line(240,110,240,160);

   line(260,110,260,160);line(260,110,290,160);line(290,160,290,110);

   line(50,190,90,190); line(70,190,70,240);

   line(120,190,140,240);line(140,240,160,190);

   line(190,190,203,240);line(203,240,215,190);line(215,190,228,240);
   line(228,240,240,190);

   line(320,190,360,240); line(320,240,360,190);

   line(380,190,400,215);line(400,215,420,190);line(400,215,400,240);

   line(440,190,480,190);line(480,190,440,240);line(440,240,480,240);

   line(100,290,140,290);line(120,270,120,310);
   line(160,290,200,290);
   line(220,285,260,285);line(220,295,260,295);
   line(310,270,280,310);line(320,270,350,310);
   line(400,270,370,290);line(370,290,400,310);line(420,270,450,290);
   line(450,290,420,310);



   getch();
   closegraph();
   return 0;
}
