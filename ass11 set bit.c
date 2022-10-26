#include<stdio.h>
void main()
{
int num,i,pos;//declaration of variables
printf("enter the num :");
scanf("%d",&num);//taking number from user
printf("enter the position to set :");
scanf("%d",&pos);//taking position from user to set that position
for(i=0;i<=31;i++)
{
  if(num & (1<<(31-i)))
    printf("1");
  else
    printf("0");
}//using for loop printing the binary of given number

printf("\n");//next line

for(i=0;i<=31;i++)
num=num|(1<<pos);//set the given position

for(i=0;i<=31;i++)
{
  if(num&(1<<(31-i)))
    printf("1");
  else
    printf("0");
}//after set using for loop printing the binary of number
printf("\n");
printf("set pos :%d\n",num);//printng the number
}
