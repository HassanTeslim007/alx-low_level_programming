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
char alphabetUpper = 'A';

while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
while (alphabetUpper <= 'Z')
{
putchar(alphabetUpper);
alphabetUpper++;
}
putchar('\n');
return (0);
}
