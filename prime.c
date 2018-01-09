#include<stdio.h>
int main()
{
int i,l,h,flag;
printf("\n Enter two intervals");
scanf("%d %d",&l,&h);
while(l<h)
{
flag=0;
for(i=2;i<=l/2;++i)
{
 if(l%i==0)
 {
   flag=1;
   break;
  }
}
if(flag==0)
 printf("%d",l);
++l;
}
return 0;
}
