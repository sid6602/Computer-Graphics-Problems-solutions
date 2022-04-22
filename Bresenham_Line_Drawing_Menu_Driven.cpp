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

      case 2:
            //  Thick line
            printf("\nEnter starting co-ordinates:");
    scanf("%d%d",&x1,&y1);
    printf("\nEnter ending co-ordinates:");
    scanf("%d%d",&x2,&y2);
            printf("\nEnter the required thickness: ");
            scanf("%d",&thickness);
            line (x1, y1, x2, y2);
            if ((y2 - y1) / (x2 - x1) < 1)
            {
            wy = (thickness-1)*sqrt(pow((x2-x1),2)+pow((y2-y1),2))/(2*fabs(x2-x1));  for(i = 0; i < wy; i++);
            {
            line(x1, y1 - i, x2, y2 - i);
            line(x1, y1 + i, x2, y2 + i);
            }
            }
            else
            {
            wx = (thickness-1)*sqrt(pow((x2-x1),2)+pow((y2-y1),2))/(2*fabs(y2-y1));  for(i = 0; i < wx; i++);
            {
            line(x1 - i, y1, x2 - i, y2);  line(x1 + i, y1, x2 + i, y2);
            }
            }

        break;
        
        case 3:
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
                if(i%2==0){
                putpixel(x1,y1,WHITE);
                }
                // delay(50);
                x1=x1+xk;
                y1=y1+yk;
            }
        break;
      
      
