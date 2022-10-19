#include<stdio.h>  
void main(int argc,char *argv[] )  
{ 
 int i;
 if(argc<1)
 printf("No argument passed through command line.\n");  
 else  
  printf("Arguments are: ");
  for(i=1;i<argc;i++)
  printf("%s ", argv[i]);
  printf("\n");
}  
     
