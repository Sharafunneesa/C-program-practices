#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp1 = fopen("f1","r");
FILE *fp2 = fopen("f2","r");

FILE *fp3 = fopen("f3","w");
printf("%p\n", fp1);
char c;

if(fp1==NULL || fp2==NULL || fp3==NULL)
{ 
 puts("files are not open");
 return 0;
}
else
{
while((c=fgetc(fp1))!=EOF)
 fputc(c,fp3);

while((c=fgetc(fp2))!=EOF)
 fputc(c,fp3);
}
fclose(fp1);
fclose(fp2);
fclose(fp3);
return 0;
}

