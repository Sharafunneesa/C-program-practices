#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp1 = fopen("f1","r");//file f1 is openning in read mode
FILE *fp2 = fopen("f2","r");//file f2 is openning in read mode

FILE *fp3 = fopen("f3","w");//take another file name f3 opened in write mode
char c;//declairing a variable c

if(fp1==NULL || fp2==NULL || fp3==NULL)//checking the three files are present or not
{ 
 puts("files are not open");//if it note print the comment not present
 return 0;
}
else//otherwise
{
while((c=fgetc(fp1))!=EOF)//using while loop taking all the characters from file one 
 fputc(c,fp3);//and put into file 3

while((c=fgetc(fp2))!=EOF)//using while loop taking all the characters from file two
 fputc(c,fp3);//and put into file 
}
fclose(fp1);
fclose(fp2);
fclose(fp3);//closing all files
return 0;
}

