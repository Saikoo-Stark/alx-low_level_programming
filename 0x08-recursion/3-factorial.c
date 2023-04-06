#include <unistd.h>
#include "main.h"
/**
 * factorial - writes the character c to stdout
 * @n: 1st paramter
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
