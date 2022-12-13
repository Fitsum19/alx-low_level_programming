#include "main.h"
/**
 *print_alphabet_x10 - funtion print alphabet 10 times
 *
 *Return - X10 a-z
 */
void print_alphabet_x10(void)
{
int i, m = 0;
while (m < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
m++;
_putchar('\n');
}
}
