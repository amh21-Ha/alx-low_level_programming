#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers gose here */
/* betty style doc for function main here */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code */
	if (n>0)
		printf("is positive\n");
	else if (n==0)
		printf("is zero\n");
	else
		printf("is negative\n");
	return (0);
}
