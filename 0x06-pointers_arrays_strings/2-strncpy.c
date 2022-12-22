#include "main.h"
/**
*_strcmp - compares two strings.
*@s1: pointer to first string.
*@s2: pointer to second string.
*
*Return: value less than 0 if string is less than the other.
*value greater than 0 if string is greater than the other.
*0 if strings are equal.
*/
int _strcmp(char *s1, char *s2)
{
int counter, cmpVal;

counter = 0;
while (s1[counter] == s2[counter] && s1[counter] != '\0')
{
counter++;
}

cmpVal = s1[counter] - s2[counter];
return (cmpVal);
}#include "main.h"
/**
* *_strncpy - check the code for Holberton School students.
* @dest : int
* @src : int
* @n : int
* Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
