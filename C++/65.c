#include <stdio.h>

int main()
{
    int a[3], i;
    for(i=0; i<3; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<3; i++)
    {
        if(a[i]%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}
