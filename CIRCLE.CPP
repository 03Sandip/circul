#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm,r,c;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 r=10;
 c=0;
 while(!kbhit())
 {
  setcolor(c);
  circle(320,240,r);
  r=r+10;
  delay(500);
  ++c;
  if(c>15)
   c=0;
 }
 getch();
 }