#include <stdio.h>
/**
 * main - print alphabet lower case using putchar.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c  <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
