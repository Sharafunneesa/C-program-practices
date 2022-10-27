#include<stdio.h>
#include<stdlib.h>
int my_atoi(const char *);//declaration of user defined function my_atoi

void main()
{
int num;
char s[10];//declaration of variables
printf("enter the string : ");
scanf("%s",s);//taking string from user
num=my_atoi(s);//calling user defined my_atoi function
printf("s=%s  num=%d\n",s,num);//printing string and converted intiger
}

int my_atoi(const char *p)
{
 int i=0,n=0;//declairing variables 
 if(p[0]=='-')//checking first element is -
 i=1;//assigning 1 into variable i if first element is -
 for(;p[i];i++)
 {
  if(p[i]>='0' && p[i]<='9')//checking the given strig is in between 0 and 9
  n=n*10+p[i]-48;//if it is then coverting to intiger
  else
  break;//or break the loop
 }
 if(p[0]=='-')//again checking the first is -
 n=-n;//if it is the assigning negative simple to answar 
 return n;//return the converted intiger into main function
}
 
