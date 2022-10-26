#include<stdio.h>
void main()
{
int num,i,pos;//declaration of variables
printf("enter the num :");
scanf("%d",&num);//taking number from user
//printf("enter the position to set :");
//scanf("%d",&pos);
for(i=0;i<=31;i++)
{
  if(num & (1<<(31-i)))
    printf("1");
  else
    printf("0");
}//using for loop printing binary of a given number

printf("\n");//next line

for(i=0,pos=0;i<=31;i++,pos++)
num=num^(1<<pos);//toggle every postion

for(i=0;i<=31;i++)
{
  if(num&(1<<(31-i)))
    printf("1");
  else
    printf("0");
}// after toggling printing binary of that number
printf("\n");//next line
printf("set pos :%d\n",num);//printing number
}
