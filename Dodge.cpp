#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>


void main()
{

int a=DETECT,b;

initgraph(&a,&b,"c:\\TURBOC3\\BGI");


setbkcolor(WHITE);
setcolor(8);
line(100,250,500,250);
line(100,290,500,290);
arc(135,270,150,210,40);
arc(465,270,330,30,40);
line(105,252,495,252);
arc(142,269,155,205,40);
arc(459,269,335,25,40);
line(105,285,180,285);
line(495,285,420,285);
line(180,285,195,280);
line(420,285,405,280);
line(195,280,405,280);
line(120,340,480,340);
line(108,380,498,380);
arc(468,356,340,50,20);
arc(422,338,325,340,70);
arc(135,353,140,200,20);
arc(181,335,200,220,70);
arc(170,340,180,230,40);
arc(140,340,315,360,40);
line(144,370,168,370);
arc(460,340,180,230,40);
arc(430,340,315,360,40);
line(433,370,458,370);
arc(260,340,180,200,70);
arc(340,340,340,0,70);
line(195,365,405,365);
arc(200,214,190,200,100);
arc(400,214,340,350,100);
arc(122,232,90,180,20);
arc(479,232,0,90,20);
arc(124,258,120,160,40);
arc(477,258,20,60,40);
arc(209,288,160,225,130);
arc(387,291,319,20,135);
arc(200,288,170,225,130);
arc(397,291,319,10,135);
arc(137,291,136,160,70);
arc(464,291,20,44,70);
line(85,350,85,395);
line(85,395,523,395);
line(523,342,523,395);
line(526,336,526,405);
line(82,343,82,405);
arc(92,405,160,290,10);
arc(516,405,250,20,10);
line(92,415,140,415);
line(478,415,516,415);
arc(137,405,270,0,10);
arc(480,405,180,270,10);
line(147,396,147,410);
line(470,396,470,410);
arc(290,400,80,100,190);
arc(290,415,83,97,190);
line(119,240,481,240);
arc(143,230,140,200,27);
arc(457,230,340,40,27);
line(247,200,267,230);
line(223,200,267,230);
line(332,200,312,230);
line(357,200,312,230);
line(120,215,150,135);
arc(170,157,110,130,30);
line(450,135,480,215);
arc(430,157,50,70,30);
arc(300,503,69,111,400);
line(138,200,464,200);
line(136,205,156,138);
line(465,205,445,137);
arc(301,510,69,111,400);
line(100,225,90,215);
line(105,220,95,210);
line(502,225,512,215);
line(497,220,507,210);
arc(85,206,340,300,10);
arc(515,206,260,210,10);
arc(120,263,130,50,15);
arc(120,263,120,60,12);
arc(160,263,130,50,15);
arc(160,263,120,60,12);
arc(480,263,130,50,15);
arc(480,263,120,60,12);
arc(440,263,130,50,15);
arc(440,263,120,60,12);









setfillstyle(SOLID_FILL,4);
floodfill(200,300,8);
floodfill(80,330,8);
floodfill(520,330,8);
floodfill(200,370,8);
setfillstyle(SOLID_FILL,7);
floodfill(200,390,8);
setfillstyle(SOLID_FILL,4);
floodfill(200,220,8);
setfillstyle(SOLID_FILL,7);
floodfill(200,180,8);
setfillstyle(SOLID_FILL,8);
floodfill(490,400,8);
floodfill(100,400,8);
setfillstyle(SOLID_FILL,4);
floodfill(200,251,8);
floodfill(200,245,8);
floodfill(250,201,8);
floodfill(240,201,8);
floodfill(325,215,8);
floodfill(515,215,8);
floodfill(85,206,8);
setfillstyle(SOLID_FILL,8);
floodfill(305,215,8);
floodfill(455,278,8);
floodfill(455,358,8);
floodfill(405,358,8);
floodfill(175,358,8);
floodfill(175,140,8);
floodfill(130,266,8);
floodfill(165,266,8);
floodfill(445,266,8);
floodfill(484,266,8);
setfillstyle(SOLID_FILL,14);
floodfill(475,276,8);
floodfill(445,276,8);
floodfill(115,276,8);
floodfill(155,276,8);
setfillstyle(SOLID_FILL,7);
floodfill(100,276,8);

for( int i=1;i<80;i=i+10)
{
sound(i);
delay(1000);
nosound();
}

for(i=400;i<1000;i=i+100)
{
sound(i);
delay(100);
nosound();
}


getch();
closegraph();
}
