#include "main.h"
/**
 *print_alphabet - a function that prints the alphabet, in lowercase
 *
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char d = 'a';
while  (d <= 'z')
{
_putchar(d);
d++;
}
_putchar('\n');
}
