#include "main.h"
/**
* *_memcpy -  copies memory area
* @dest: destination
* @src: source
* @n: max byte
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0 ; i++, n--)
{
dest[i] = src[i];
}
return (dest);
}
