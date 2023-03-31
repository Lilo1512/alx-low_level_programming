#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * in string to be a buffer.
 * Assume that string are never empty and
 * that number will always be positive, or 0.
 * Assume that are only digits stored in the number strings.
 * If result can be stored in the buffer,
 * recuiis a ter to the result.
 * If result cannot be stored in the buffer, returns "0".
 * @n1:first number to be added
 * @n2:second number to be added
 * @r: store result
 * @size_r: size of buffer
 * Return:returns pointer to result
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 * Return: If r can store the sum a pointer to the result.
 * 	If r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int num, tens = 0;
for (; n1; n1--, size_r--)
for (; n2; n2--, size_r--)
num = (*n1 - '0') + (*n2 - '0');
num += tens;
*(r + size_r) = (num % 10) + '0';
tens = num / 10;
for (; *n1; n1--, size_r--)
num = *(n1 - '0') + tens;
*(r + size_r) = (num % 10) + '0';
tens = num / 10;
for (; n2; n2--, size_r--)
num = (*n2 - '0') +  tens;
*(r + size_r) = (num % 10) + '0';
tens = num / 10; 
}
