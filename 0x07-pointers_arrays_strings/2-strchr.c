#include "main.h"
/**
* _strchr - Locates a char
* @s: The string to be searched
* @c: The character
* Return: If c is found
*/
char *_strchr(char *s, char c)
{
int index;
for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}
return ('\0');
}
