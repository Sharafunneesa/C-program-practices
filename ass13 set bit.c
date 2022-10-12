#include<stdio.h>
int set_bit(int,int);
void main()
{
int num,pos,set;
printf("enter the number :");
scanf("%d",&num);
printf("enter the position to check :");
scanf("%d",&pos);
set=set_bit(num,pos);
if(set!=0)
printf("the given position %d is set\n",pos);
else
printf("the given position %d is not set\n",pos);

}

int set_bit(int n,int p)
{
  return (n&(1<<p));
}

