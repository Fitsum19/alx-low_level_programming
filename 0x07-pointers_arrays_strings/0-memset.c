#include "main.h"
/**
* _memset - Write a function that fills memory with a constant byte.
* @s: A pointer to the memory area
* @c: The character to fill
* @n: The number of bytes
* Return: A pointer to the filled memory area @s.
*/
void *_memset(void *s, int c, size_t n)
{
unsigned int index;
unsigned char *memory = s, value = c;
for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}

