#include<stdio.h>
void main()
{
 int num,r=0,i,p;//declaration of variables
 printf("enter the num :");
 scanf("%d",&num);//taking number from user
 for(i=0;i<=31;i++)
 {
  if(num & (1<<(31-i)))//checking the given position set or clear
    printf("1");
  else
    printf("0");
 }//using for loop print the binary of given number
 printf("\n");
 p=sizeof(num)*8;//
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
