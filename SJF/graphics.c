/* This is responsible for the graphics of the SJF algorithm */

#include "struct.h"
#include <stdio.h>
#include <graphics.h>

extern struct process pr2[20];
extern struct process pr[20];
void sorting (int, struct process*, int);

void displaygraphics (int n, struct process* pr1){
	int gd = DETECT, gm = 100800;
	int x, y, i, j;
        struct process *base = pr1;

	char m[] = "FCFS";
	char p[100];
    char id[50];
	initgraph (&gd, &gm, 0);
	moveto (0, 0);
	x = getmaxx ();
	y = getmaxy ();
	setcolor (BLUE);
	rectangle (0, 0, x, y);
	line (0, y / 3, x, y / 3);
	setfontcolor (RED);

	for (i = 0; i < n; ++i, ++base){
		sprintf (p, "Process %d", i + 1);
		outtextxy (x / n * i, 20, p);
		sprintf (p, "ID %5u", base->pid);
		outtextxy (x / n * i, 50, p);
		sprintf (p, "AT%5u", base->at);
		outtextxy (x / n * i, 60, p);
		sprintf (p, "BT %5u", base->bt);
		outtextxy (x / n * i, 70, p);
		line(x / n * i, 0, x / n * i, y / 3);

	}
    outtextxy (x / 3, 5 + y / 3, m);
	setcolor (BLUE);
    bar (x / 3 + 20, y / 3 + 30, x /3 + 100, y / 3 + 100);
    sorting (n, pr1, 20);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
           if ( (pr1[i].at) == (pr2[j].at) ){
                setcolor (BLUE);
                bar (x / 3 + 20, y / 3 + 30, x / 3 + 100, y / 3 + 100);
    			sprintf (id, "pid%d", pr2[j].pid);
                outtextxy (x / 3 + 30, y / 3 + 55, id);
                delay (2000);
                setfontcolor (BLUE);
            }
        }
        setfontcolor (RED);
    }

    setcolor (BLUE);
    line (0, 2 * y / 3, x, 2 * y / 3);
	for (i = 0; i < n; i++){
    	for (j = 0;j < n; j++){
			if ( (pr1[i].at) == (pr2[j].at) ){
                sprintf (id, "pid%d", pr2[j].pid);
                outtextxy (x / n * i, 2 * (y / 3) + 50, id);
                delay (2000);
            }
         }
		line (x / n * i, 2 * y / 3, x / n * i, y);
	}
	delay (2000);
	outtextxy (x - 150, y - 20, "Tapasweni Pathak");
	while (!kbhit ());
	closegraph ();
}

//sorting
void sorting (int n, struct process pr1[], int a){
    int temp, i, j;
    for (i = 1; i < n; i++){
        temp = pr1[i].bt;
    	j = i - 1;
        while (temp < pr1[j].bt && j >= 0){
            pr1[j + 1].bt = pr1[j].bt;
            j = j - 1;
        }
        pr1[j + 1].bt = temp;
    }
}

