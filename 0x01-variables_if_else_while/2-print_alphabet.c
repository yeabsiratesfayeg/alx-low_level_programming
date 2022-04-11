#include <stdio.h>

/**
 *main - Prints the alphabet in lower casei
 * 
 *Return: Always (Success)
 */
int main(void)
{
int  c;

for (c = 0; c < 26; ++c)
putchar('a'+c);

putchar('\n');

return (0);
}
