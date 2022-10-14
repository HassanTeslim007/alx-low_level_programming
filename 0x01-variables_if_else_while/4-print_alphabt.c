#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
if (alphabet == 'q' || alphabet == 'e')
{
continue;
}
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
