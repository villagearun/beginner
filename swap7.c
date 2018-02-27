#include<stdio.h>
#include<string.h>
void main()
{
  int i;
  char a[30],t;
  printf("\n Enter string:");
  scanf("%s",&a);
  for(i=0;a[i]!='\0';i++)
  {
    if(i%2==0)
    {
      t=a[i];
      a[i]=a[i+1];
      a[i+1]=t;
    }
  }
  printf("\n %s",a);
}
