#ifndef MAIN_H 
#define MAIN_H 
/** 
* File: main 
*
*Desc: header file 
*/ 
Int _putchar(char c); 
Int _islower(int c); 
Int _isalpha(int c); 
Int _abs(int n); 
Int _isupper(int c); 
Int _isdigit(int c); 
Int _strlen(char *s); 
Void _puts(char *s); 
Char *_strcpy(char *dest, char *src); 
Int _atoi(char *s); 
Char *_strcat(char *dest, char *src); 
Char *_strncat(char *dest, char *src, int n); 
Char *_strncpy(char *dest, char *src, int n); 
Int _strcmp(char *s1, char *s2); 
Char *_memset(char *s, char b, unsigned int n); 
Char *_memcpy(char *dest, char *src, unsigned int n); 
Char *_strchr(char *s, char c); 
Unsigned int _strspn(char *s, char *accept); 
Char *_strpbrk(char *s, char *accept); 
Char *_strstr(char *haystack, char *needle);
#endif
