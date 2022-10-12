#include<stdio.h>
void main()
{
int num=1;
char *p=&num;
if(*p==1)
printf("the cpu is little endian\n");
else
printf("the cpu is big endian\n");
p++;
printf("%d",*p);
}
