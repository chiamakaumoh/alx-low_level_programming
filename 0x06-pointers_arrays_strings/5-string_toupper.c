#include "main.h"

/**
 * string_toupper - changes all lowercases letters of a string
 * to uppercases
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_youpper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}
return (s);
}
