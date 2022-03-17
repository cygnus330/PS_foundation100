#include <stdio.h>

int main()
{
    char a, b='a'-1;
    scanf("%c", &a);
    do
    {
        printf("%c\n", ++b);
    } while(b!=a);
}
