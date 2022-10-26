#include<stdio.h>
void main()
{
int num,i,pos;//declaration of variables
printf("enter the num :");
scanf("%d",&num);//taking number from user
printf("enter the position to set :");
scanf("%d",&pos);//taking position from user to clear that position
for(i=0;i<=31;i++)
{
  if(num & (1<<(31-i)))//the given number is converting to binary
    printf("1");
  else
    printf("0");
}

printf("\n");

for(i=0;i<=31;i++)
num=num& ~(1<<pos);//clar the the given position

for(i=0;i<=31;i++)
{
  if(num&(1<<(31-i)))//after clearing the psition convert that num into binary to print binary
    printf("1");
  else
    printf("0");
}
printf("\n");
printf("set pos :%d\n",num);//print number
}
