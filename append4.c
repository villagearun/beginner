#include<stdio.h>
#include<string.h>
void main()
{
  int l;
  char n[20];
  printf("\n Enter string:");
  scanf("%s",n);
  l=strlen(n);
  n[l]='.';
  printf("%s",n);
}
