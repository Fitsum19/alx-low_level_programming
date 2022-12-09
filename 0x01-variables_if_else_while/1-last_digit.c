#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main- Entry point
 * Description- The last digit
 * Return : 0  (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if ( n > 5)
{
printf("%i and is greater than 5\n", n);
}
else if ( n < 6, n != 0 )
{
printf("%i and is less than 6 and not 0\n", n);
}
else
{
printf("%i and is 0\n", n);
}
return (0);
}
