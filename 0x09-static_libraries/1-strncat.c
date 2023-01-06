#include "main.h"
/**
* _strncat - concatenate two strings
* @dest: value1
* @src: value2
* @n: value3
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}

