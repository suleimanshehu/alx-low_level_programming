#include "main.h"
/**
*_isalpha-checksforalphabet
*@c:charactertobechecked
*Return:1ifcharacterisaletter,0ifotherwise
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
