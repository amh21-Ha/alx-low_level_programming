#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57) /* 57 is corrrsponds with ASCII character 9 */
	{
		putchar (n);
		if (n != 57)
		{
			putchar (',');
			putchar (' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
