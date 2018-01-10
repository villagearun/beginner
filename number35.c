#include<stdio.h>
int main()
{
int count=0,i;
char a[50];
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
 if(a[i]>='0'&&a[i]<='9')
 count++;
}
printf("COUNT=%d",count);
return 0;
}
