#include<stdio.h>  
void main(int argc,char *argv[] ) //taking load time input 
{ 
 int i;
 if(argc<1)//checking the given load input count is less than one
 printf("No argument passed through command line.\n"); //if it one printing usage message
 else  
  printf("Arguments are: ");
  for(i=1;i<argc;i++)
  printf("%s ", argv[i]);//using for loop printing all argument passed in command line
  printf("\n");//taking next line
}  
     
