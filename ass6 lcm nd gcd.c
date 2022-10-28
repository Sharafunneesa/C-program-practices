#include<stdio.h>
int my_gcd(int,int);
int my_lcm(int,int);
void main()
{
  int n1,n2,lcm,gcd;//declaration of variables
  printf("enter the numbers:");
  scanf("%d%d",&n1,&n2);//taking numbers from user

  gcd=my_gcd(n1,n2);//calling the my_gcd function and assignning the return value to the gcd variable
  lcm=my_lcm(n1,n2);//calling the my_lcm function and assignning the return value to the lcm variable
  printf("the gcd and lcm of given numbers is %d %d\n",gcd,lcm);//printing the gcd and lcm of given tw numbers
}

int my_gcd(int a,int b)//definition of gcd function
{
 if(a==0)//checking the given first number is zero
   return b;//if it zero return gcd as second number
 if(b==0)//checking the second number is zero
   return a;//if it zero then return first number as gcd
 return my_gcd(b,a%b);//if both is not zero then calling the same function up to get the first zero value by taking the modulus
 }
 
int my_lcm(int x,int y)//definition of lcm function
{
 int s;//declairing a variable
 s=(x>y)?x:y;//assignning the highest value to s variable
 while (1)
 {
   if((s%x==0) && (s%y==0))// finding the lcm
   {
     return s;break;//return the lcm value and break the loop
   }
   ++s;//if it not lcm increase the value
 }
}
