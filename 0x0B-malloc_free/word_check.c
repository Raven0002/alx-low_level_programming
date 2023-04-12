#include "main.h"

/**
 * word - check words in the string
 * @s: pointer to a string to check for words
 *
 * Return: result
 */

int word(char *s)
{
        int i, flag, w;

        flag = 0;
        w = 0;

        for (i = 0; s[i] != '\0'; i++)
        {
                if (s[i] == ' ')
                {
                        flag = 0;
                }
                else if (flag == 0)
                {
                        flag = 1;
                        w++;
                }
        }
        return (w);
}
