#include<stdio.h>
void main()
{
 int num,i,j,sum=1,flag=0;
 printf("enter the number to find the prime factor:");
 scanf("%d",&num);
 printf("prime factors are:");
 for(i=2;i<=num/2;i++)
 {
   if(num%i==0)
   {
    for(j=2;j<=i/2;j++)
    {
      if(i%j==0)
      {
       flag=1;
       break;
      }
    }
    if(flag==0)
     printf("%d ",i);
   }
 }
}

