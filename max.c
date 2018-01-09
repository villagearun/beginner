#include<stdio.h>
int main()
{
int a[10],i,max,j,n;
scanf("%d",&n);
printf("\n Enter array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(j=1;j<n;j++)
{
if(a[j]>max)
 max=a[j];
}
printf("Maximum is:%d",max);
return 0;
}
