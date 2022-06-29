#include "main.h"
/**
 * _isalpha - to check the alphabet charactes
 * @c: character to be checked
 * Return: 1 if it is alphabet or return 0 otherwise
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
