#include <stdio.h>
#include <stdlib.h>

/**
*
*Main - print putchar
*
*Return: putchar
*
*/

int main(void){
int str[] = {95, 70, 75, 74, 63, 68, 61, 72};
int count, sz;

sz = sizeof(str) / sizeof(int);
for (count = 0; count < sz; count++)
{
_putchar(str[count]);
}
_putchar('\n');
return (0);
}
