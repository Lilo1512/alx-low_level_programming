#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = lower('H');
    putchar(r + '0');
    r = lower('o');
    putchar(r + '0');
    r = lower(108);
    putchar(r + '0');
    putchar('\n');
    return (0);
}
