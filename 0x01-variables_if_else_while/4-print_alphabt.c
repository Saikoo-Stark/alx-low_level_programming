#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0 ; i < 26 ; i++)
	{
		if (i == 4 || i == 16)
			continue;
		putchar(97 + i);
	}
	putchar('\n');
	return (0);
}

