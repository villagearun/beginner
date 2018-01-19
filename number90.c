#include<stdio.h>
int main()
{
char a[10];
int b[10],i;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
 if(a[i]>=0&&a[i]<=9)
 {
 printf("%d",a[i]); 
 }
}
return 0;
}
