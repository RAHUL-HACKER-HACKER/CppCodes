//using namespace std;
//#include<iostream>
#include<graphics.h>
int main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,(char*)""); /* initialization of graphic mode */
  circle(150,150,100);
getch();
  closegraph(); /* Restore orignal screen mode */
  return 0;
}
