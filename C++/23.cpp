#include <stdio.h>
int main()
{
 int i;
 char d[20]="";
 scanf("%s", d);
 for(i=0; d[i]!='\0'; i++)
 {
  printf("\n'%c\'", d[i]);
 }
 return 0;
}
