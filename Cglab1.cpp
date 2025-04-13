#include <bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI"); // Make sure the path is correct

    int h, k, radius;
    printf("Center coordinate (x y): ");
    scanf("%d %d", &h, &k);
    printf("Radius: ");
    scanf("%d", &radius);

    setbkcolor(BLUE);
    cleardevice();
    outtextxy(35, 55, "circle");
    circle(h, k, radius);

    getch();
    closegraph();
    return 0;
}
