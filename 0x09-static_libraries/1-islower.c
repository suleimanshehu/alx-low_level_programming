#include "main.h"
/**
* *_islower-checksifacharacterislowercase
* *@c:thecharacter
* *Return:1ifletterislowercase,0ifotherwise
* */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
