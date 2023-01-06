#include "main.h"
/**
* _strcat - concatenates strings
* @dest: value1
* @src:  value2
* Return: void
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
