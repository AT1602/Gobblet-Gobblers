#include <iostream>
#include <graphics.h>
#include <winbgim.h>

int main()
{
  int gd = DETECT, gm;
  initgraph(&gd, &gm, "");
  initwindow(800,600);
  setbkcolor(BLUE);
  cleardevice();
    int x = 400, y = 300, r;
  for (r = 25; r <= 125; r += 20)
      circle(x, y, r);
  int midx, midy;
   midx = getmaxx() / 2;

   midy = getmaxy() / 2;
      outtextxy(midx, midy, "Press any key to quit:");
  getch(); closegraph(); return 0;
}
