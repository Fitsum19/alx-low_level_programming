#include "main.h"
/**
 *print_line- a function draw a start line
 *@n: the number of times the charachter printed
 *Return: 0
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
