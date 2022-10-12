#include<stdio.h>
void main()
{
int num,i,pos;
printf("enter the num :");
scanf("%d",&num);
printf("enter the position to set :");
scanf("%d",&pos);
for(i=0;i<=31;i++)
{
  if(num & (1<<(31-i)))
    printf("1");
  else
    printf("0");
}

printf("\n");

for(i=0;i<=31;i++)
num=num& ~(1<<pos);

for(i=0;i<=31;i++)
{
  if(num&(1<<(31-i)))
    printf("1");
  else
    printf("0");
}
printf("\n");
printf("set pos :%d\n",num);
}
