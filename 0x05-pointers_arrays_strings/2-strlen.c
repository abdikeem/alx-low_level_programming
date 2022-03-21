#include "main.h"

/**
 * int _strlen - function that returns length of a String
 * @author Abdihakim Abdirahman
 * @s - checks the length of our charactor string
 * Return: 0
 */

int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
return (len);
}
