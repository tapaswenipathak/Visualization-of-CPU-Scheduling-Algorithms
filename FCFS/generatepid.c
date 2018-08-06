/* This randomly genrates the Process IDS */

#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern struct process pr[20];
extern struct process pr2[20];
void sorting(int, struct process *, int);
void displaygraphics(int, struct process *);
void generatepid(int n) {
  int myRand(int r) {
    int a = 1;
    int b = 100;
    return (r % (a - b) + a);
  }
  int i;
  unsigned int inputseed;
  inputseed = (unsigned int)time(NULL);
  srand(inputseed);
  for (i = 0; i < n; ++i) {
    pr[i].at = myRand(rand());
    pr[i].bt = myRand(rand());
  }
  for (i = 0; i < n; i++) {
    pr[i].pid = i + 1;
  }
  for (i = 0; i < n; i++) {
    pr2[i].bt = pr[i].bt;
    pr2[i].at = pr[i].at;
    pr2[i].pid = pr[i].pid;
  }
  displaygraphics(n, pr);
}
