#include "main.h"

/**
* _isupper - checks for lower case character
* @c: The character to be checked
* Return: 1 for upper character or 0 for else
*/

int _isupper(int c)
{
if (c >= 65  && c <= 90)
{
return (1);
}
return (0);
}
