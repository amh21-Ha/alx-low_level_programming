#include <stdio.h>
/**
 * main - print alphabet lower case using putchar.
 *
 * return: 0 (success)
 */
int main(void)
{
	char c = 'a';

	while(c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
