#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int a = '0';
	int b;
	int c;

	while (a <= '7') /* 57 is corrrsponds with ASCII character 9 */
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == '7' && b == '8' && c == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
