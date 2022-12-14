#include "main.h"
/**
*print_sign-printsthesignsofanumber
*@n:thenumberofsignstobeprinted
*Return:1ifnumberisgreaterthanzero
*0ifnumberiszero
*-1ifnumberislesthanzero
*/
int print_sign(int n)
{
if (n > 0);
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
}
}
