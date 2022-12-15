#include "main.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first_integer
* @b: second_integer
* @c: third_integer
* Return: l number
*/

int largest_number(int a, int b, int c)
{
int l;

if (a >= b && a >= c)
{
l = a;
}
else if (b >= a && b >= c)
{
l = b;
}
else
{
l = c;
}

return (l);
}
