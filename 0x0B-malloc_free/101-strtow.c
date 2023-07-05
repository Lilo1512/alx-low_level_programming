#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **strtow(char *str)

{
   int length;
    int count;
    int i;
    int j;
    int k;


    if (str == NULL || str[0] == '\0')
        return NULL;
 
    for (i = 0; str[i] != ' ' && str[j] != '\0'; i++, count++);
{
i = 0;
words[i] = malloc(sizeof(char) * (count + 1));
    if (words == NULL)
       return NULL;
k = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
            if (str[i] == ' ')
            continue;
        for (j = i; str[j] != ' ' && str[j] != '\0'; j++, length++);
        words[k] = malloc(sizeof(char) * (length + 1));
        if (words[k] == NULL)
        {
            for (i = 0; i < k; i++)
                free(words[i]);
            free(words);
            return NULL;
        }
    }
}
        for (j = i; j < i + length; j++)
	{
	words[k][j - i] = str[j];
        words[k][length] = '\0';
        k++;

        i = j;
    words[count] = NULL;
	}
    return words;
}
