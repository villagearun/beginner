#include<stdio.h>
int main()
{
int n,ans=1,r;
scanf("%d",&n);
while(n!=0)
{
r=n%10;
ans=ans*r;
n=n/10;
}
printf("%d",ans);
return 0;
}
