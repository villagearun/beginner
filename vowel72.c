#include<stdio.h>
int main()
{
char s[10],s1[15]="aeiouAEIOU";
int i,count=0,j;
scanf("%d",s);
for(i=0;s[i]!='\0';i++)
{
 for(j=0;s1[j]!='\0';j++)
 {
  if(s[i]==s1[j])
  {
   count++;
  }
 }
}
if(count==0)
{
printf("\n NO");
}
else
{
printf("\nYES");
}
return 0;
}
