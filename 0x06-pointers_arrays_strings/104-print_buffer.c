#include <stdio.h>

#include "main.h"

/**
 * print_buffer - function
 * @b : param1
 * @size : param2
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_buffer(char *b, int size)
{
	int i = 0, j = 0, a = 0, k = 0, c = 0;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (a = 0; a < 10; a++)
		{

			if (j < size)
			{
				printf("%02x", b[j]);
				j++;
			}
			else if (a < 10)
				printf("  ");

			a++;

			if (j < size)
			{
				printf("%02x ", b[j]);
				j++;
			}
			else if (a < 10)
				printf("   ");
		}

		for (c = 0; k < size && c < 10; c++, k++)
		{

			putchar(b[k]);
		}

		putchar('\n');
	}
}
