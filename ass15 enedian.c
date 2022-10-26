#include<stdio.h>
void main()
{
int num=1;//initializing a variable with 1
char *p=&num;//initializing a character pointer with adress of given number
if(*p==1)//fetching value that pointer pointing and checking it eqaul with 1
printf("the cpu is little endian\n");//if that equal printing comment
else
printf("the cpu is big endian\n");// or printing comment
p++;
printf("%d",*p);
}
