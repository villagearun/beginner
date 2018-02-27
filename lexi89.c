#include<stdio.h>
#include<string.h>
void main()
{
int i,j,l;
char a[20],t;
printf("\n Enter the string:");
a=gets(a);
l=strlen(a);
for(i=0;i<=l-1;i++)
{
  for(j=i+1;j<l;j++)
  {
   if(a[i]>a[j])
   {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    }
   }
  }
 for(i=0;i<=l;i++)
 {
 printf("%c",a[i]);
 }
}
