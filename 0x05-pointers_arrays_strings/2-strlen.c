#include "main.h"

/**
 * @brief int _strlen - function that returns length of a String
 * @author Abdihakim Abdirahman
 * 
 * Return: 0
 */

int _strlen(char *s)
{
int len;
for (len = 0; s[len] != '\0'; ++len)
{
    putchar(s[len]);
}
}
