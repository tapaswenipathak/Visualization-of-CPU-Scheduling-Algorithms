/* File having main function */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int n;
extern void generatepid(int a);      // Generates Process ids randomly
extern void generateBT(int b);       // Generates Burst Time randomly
extern void generateAT(int c);       // Generates Arrival Time randomly
extern void generatepriority(int c); // Generates Priorities randomly
int main() {
  printf("Enter the no. of processes : ");
  scanf("%d", &n);
  generatepid(n);
  return 0;
}
