#include<stdio.h>
void main()
{
 int num,i,j,sum=1,flag=0;//declaration of variables
 printf("enter the number to find the prime factor:");
 scanf("%d",&num);//taking number from user
 printf("prime factors are:");
 for(i=2;i<=num/2;i++)//taking a for loop for finding the prime number
 {
   if(num%i==0)//checking the given number is prime or not
   {
    for(j=2;j<=i/2;j++)//if that prime then take a for loop for finding the factors
    {
      if(i%j==0)//if the i value is modulus by j value is equal to 0
      {
       flag=1;//then setting the flag
       break;//then break the loop
      }
    }
    if(flag==0)//if the given flag is not setting to one 
     printf("%d ",i);//then print the i value that is the prim factor
   }
 }
}

