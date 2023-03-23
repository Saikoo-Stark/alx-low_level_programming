#include "main.h"
#include <stdio.h>
/**
 * print_number - function here
 * @n: param
 * Return: 1 if it is lower
 * and return 0 else
 */

void print_number(int n)
{

int reversedNum, zer, x;


reversedNum = 0, zer = 0 , x = 1;

while (n != 0)
{

if (x && !(n % 10))
{
zer++;
n /= 10;
continue;
}

x = 0;
reversedNum = reversedNum * 10 + n % 10;
n /= 10;
}


/**/
if (reversedNum < 0)
{
reversedNum = -reversedNum;
_putchar('-');
}

if (!reversedNum)
_putchar('0');

while (reversedNum)
{
_putchar('0' + reversedNum % 10);
reversedNum /= 10;
}


while (zer--)
{
	_putchar('0');
}


}
