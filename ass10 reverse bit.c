#include<stdio.h>
void main()
{
int num,r=0,i,p;
printf("enter the num :");
scanf("%d",&num);
for(i=0;i<=31;i++)
{
  if(num & (1<<(31-i)))
    printf("1");
  else
    printf("0");
}
printf("\n");
p=sizeof(num)*8;
for(i=0;i<p;i++)
{
if((num&(1<<i)))
r=r| 1<<((p-1)-i);
}
for(i=0;i<=31;i++)
{
  if(r&(1<<(31-i)))
    printf("1");
  else
    printf("0");
}
printf("\n");
printf("reverse num :%d\n",r);
}
