#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
for(i=n;;i--)
{
 if(i%2==0)
 {
 printf("%d",i);
 break;
 }
}
return 0;
}
