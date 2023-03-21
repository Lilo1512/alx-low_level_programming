#include <stdio.h>
#include "main.h"
/**
*print_sign Prints the sign of a number 
*@n: The number to be checked
* Return: 1 for positive num, -1 for negative num or zero for anything else
*/
int print_sign(int n)
{
	if (n > 0) 
		_putchar(43);
	return (1);
	else if (n < 0)
		_putchar(45); 
	return (-1);
	else
		_putchar(48);
	return (0);
	int main(void)
{
    int r;

    r = print_sign(98);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0xff);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(-1);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    return (0);
}
}
