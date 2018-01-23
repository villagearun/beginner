#include<stdio.h>
int main()
{
int n,k,i;
int a[10];
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 if(a[i]==k)
 {
 printf("\nYES");
 break;
 }
}
return 0;
}
