#include<stdio.h>
int set_bit(int,int);// declaration of user defined function set_bit
void main()
{
int num,pos,set;//declaration of variables
printf("enter the number :");
scanf("%d",&num);//taking number from user
printf("enter the position to check :");
scanf("%d",&pos);//taking position from numbers
set=set_bit(num,pos);//calling the user defined function
if(set!=0)//checking the return value from set_bit function is zero or not
printf("the given position %d is set\n",pos);//if that not zero then print the pos is set
else
printf("the given position %d is not set\n",pos);//if it is zero then print the given pos is not set

}

int set_bit(int n,int p)//definition of user defined function
{
  return (n&(1<<p));//checking the position is set or clear then that value is return to the main function
}

