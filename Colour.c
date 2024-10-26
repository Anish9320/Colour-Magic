#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
int gd=DETECT,gm;
char name[100];
initgraph(&gd,&gm,"C://Turboc//bgi");
cleardevice();
settextstyle(2,0,8);
setcolor(YELLOW);
outtextxy(210,200,"MICRO PROJECT");
setcolor(WHITE);
outtextxy(210,220,"TOPIC:- COLOR MAGIC");
setcolor(RED);
outtextxy(210,240,"BY GROUP-03");
delay(600);
cleardevice();

printf("Enter Text: ");
delay(100);
scanf("%s",&name);
cleardevice();

while(!kbhit())
{
setcolor(rand()%16);
settextstyle(1,0,2);
outtextxy(200,0,"Press Any key to stop program!");
setcolor(rand()%16);
settextstyle(rand()%16,rand()%10,rand()%16);
outtextxy(rand()%600,rand()%400,name);
sound(rand()%10000);
delay(80);
nosound();
}
getch();
cleardevice();
setcolor(RED);
settextstyle(0,0,10);
outtextxy(100,200,"THANKS");
delay(250);
closegraph();
}
