#include<stdio.h>
int main()
{
int a[10],i,max;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(j=0;J<10;j++)
{
if(a[i]>max)
max=a[i];
}
printf("Maximum:%d",max);
return 0;
}
