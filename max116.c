#include<stdio.h>
int main()
{
int a[25],i,max;
for(i=0;i<25;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<25;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("maximum element %d",max);
return 0;
}
