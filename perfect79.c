#include<stdio.h>
int main()
{
int n,m;
scanf("%d %d",&n,&m);
l=n*m;
for(r=0;r<=l;r++)
{
if(l==(r*r))
printf("\n YES");
}
return 0;
}
