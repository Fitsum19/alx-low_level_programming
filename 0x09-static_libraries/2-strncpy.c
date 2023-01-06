#include "main.h"
/**
* _strncpy - copy a string
* @dest: value1
* @src: value2
* @n: value3
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
