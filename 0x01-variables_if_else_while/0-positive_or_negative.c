#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers gose here */
/* betty style doc for function main here */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code */
	if (n>0)
		printf("%d is positive\n", n);
	else if (n==0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
