//  To draw a line with line style Thin, Thick, Dotted,Dash-Dot by using Bresenham's.

#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>

int main(){
 int gd = DETECT,gm;
 int x1,x2,y1,y2,xk,yk,len,dx,dy,i,thickness,wx,wy,ch;
 initgraph(&gd, &gm, "c:\\TC\\BGI");
 

    
    
        
    while(1){
        
        printf("\n\n********* Menu *********");
        printf("\n1: Thin Line");
        printf("\n2: Thick Line");
        printf("\n3: Dotted Line");
        printf("\n4: Dash Line");
        
        printf("Enter your choise: ");
        scanf("%d",&ch);
        
    switch(ch){
        case 1:
        printf("\nEnter starting co-ordinates:");
        scanf("%d%d",&x1,&y1);
        printf("\nEnter ending co-ordinates:");
        scanf("%d%d",&x2,&y2);
            dx=x2-x1;
            dy=y2-y1;
            if(abs(dx)>=abs(dy)){
                len=abs(dx);
            }else{
                len=abs(dy);
            }
            
            xk= dx/len;
            yk= dy/len;
            
            for( i=0; i<len;i++){
                putpixel(x1,y1,WHITE);
                
                delay(50);
                x1=x1+xk;
                y1=y1+yk;
            }
        break;
