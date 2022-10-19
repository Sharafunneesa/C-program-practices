#include<stdio.h>
int my_gcd(int,int);
int my_lcm(int,int);
void main()
{
int n1,n2,lcm,gcd;
printf("enter the numbers:");
scanf("%d%d",&n1,&n2);

gcd=my_gcd(n1,n2);
lcm=my_lcm(n1,n2);
printf("the gcd and lcm of given numbers is %d %d\n",gcd,lcm);
}

int my_gcd(int a,int b)
{
 if(a==0)
 return b;
 if(b==0)
 return a;
 return my_gcd(b,a%b);
 }
 
int my_lcm(int x,int y)
{
 int s;
 s=(x>y)?x:y;
 while (1)
 {
 if((s%x==0) && (s%y==0)) 
 {
  return s;break;
 }
 ++s;
 }
}
