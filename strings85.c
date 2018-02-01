#include<stdio.h>
int main()
{
  char ch[50],a[20];
  int l,i,A;
  printf("Enter a string");
  scanf("%s",ch);
  l=strlen(ch);
  for(i=0;i<=l;i++)
  {
    if(i%2==0)
    {
      printf("%c",ch[i]);
    }
  }
  printf("\t");
  for(i=0;i<=l;i++)
  {
    if(i%2!=0)
    {
      printf("%c",a[i]);
    }
  }
  
  return 0;
}
