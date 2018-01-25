#include<stdio.h>
int main()
{
int L,B,H;
scanf(“%d %d %d”,&L,&B,&H);
SA=(2*L*B)+(2*L*H)+(2*H*B);
VOL=(L*B*H);
printf(“volume=%d  surface area=%d”,VOL,SA);
return 0;
}
