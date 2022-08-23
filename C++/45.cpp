#include <stdio.h>
int main()
{
    long int a, b, c, d;
    double e;
    scanf("%ld %ld %ld", &a, &b, &c);
    d=a+b+c;
    e=double(d)/3;
    printf("%ld", d);
    printf("\n%.1f", double(e));
}
