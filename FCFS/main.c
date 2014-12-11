/*
 * This contains the main function.
 * This calls the generatepid function, which generates random process ids.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int n;
extern void generatepid(int a);
extern void generateBT(int b);
extern void generateAT(int c);
extern void generatepriority(int c);
int main()
{
	printf ("Enter the no. of processes: ");
	scanf ("%d", &n);
	generatepid (n);
return 0;
}

