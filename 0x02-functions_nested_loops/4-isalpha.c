#include "main.h"
/**
 * isalpha-Checks for alphabetic character *@c: The character to be checked
 * Return: 1 for alphabetic character or for 0  anything else
 */

int isalpha(int c)

{

	if((c >= 65 &&c <= 90) || (c >= 97 && c <= 122))
{
	return (1);
}
        return (0);
	}
