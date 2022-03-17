#include <stdio.h>

int main()
{
	char a[2001];
	fgets(a, 2000, stdin);
	int i= 0;
	while(a[i]!= '.');
        printf("%c", a[i++]);
	printf("\n");
	i+= 1;
	while(a[i]!= NULL)
        printf("%c", a[i++]);

	return(0);
}
