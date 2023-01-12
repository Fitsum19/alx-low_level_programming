#include <stdlib.h>
#include "main.h"
/**
* *malloc_checked - allocates memory
* @b: number of bytes
* Return: a pointer
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}

