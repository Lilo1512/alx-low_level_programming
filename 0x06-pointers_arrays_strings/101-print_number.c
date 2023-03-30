#include "main.h"
#include <stdio.h>

/**
 * print_number - print numbers chars
 * @n: integer params
 * main - check the code
 * Return: 0
 */

int main(void)

{
    print_number(98);
    putchar('\n');
    print_number(402);
    putchar('\n');
    print_number(1024);
    putchar('\n');
    print_number(0);
    putchar('\n');
    print_number(-98);
    putchar('\n');
    return (0);
}

void print_number(int n)

{

	unsigned int n1;
	n1 = n;
	if (n < 0)
	{
	putchar('-');
	n1 = -n;
	}
		if (n1 / 10 != 0)
		{
		print_number(n1 / 10);
		}
	putchar((n1 % 10) + '0');
}
