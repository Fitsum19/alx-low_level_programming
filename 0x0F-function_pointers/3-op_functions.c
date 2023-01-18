#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
* op_add - Sum of two numbers.
* @a: first number.
* @b: second number.
* Return: sum.
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - Difference of two numbers.
* @a: first number.
* @b: second number
* Return: difference
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - Product of two numbers.
* @a: first number
* @b: second number.
* Return: product
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - Division of two numbers.
* @a: first number.
* @b: second number.
* Return: quotient
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod - Remainder of the division of two numbers.
* @a: first number.
* @b: second number.
* Return: remainder
*/
int op_mod(int a, int b)
{
return (a % b);
}
