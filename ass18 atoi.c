#include<stdio.h>
#include<stdlib.h>
int my_atoi(const char *);

void main()
{
int num;
char s[10];
printf("enter the string : ");
scanf("%s",s);
num=my_atoi(s);
printf("s=%s  num=%d\n",s,num);
}

int my_atoi(const char *p)
{
 int i=0,n=0;
 if(p[0]=='-')
 i=1;
 for(;p[i];i++)
 {
  if(p[i]>='0' && p[i]<='9')
  n=n*10+p[i]-48;
  else
  break;
 }
 if(p[0]=='-')
 n=-n;
 return n;
}
 
