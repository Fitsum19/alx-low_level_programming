#include "main.h"
#include <unistd.h>
/**
* _putchar - writes the character
* @c: character to print
* Return: 1 or -1 is returned
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

