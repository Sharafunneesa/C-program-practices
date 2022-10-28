#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,stack[size];
void push();
void pop();
void show();//declairing every variables and functions

void main()
{
 int choice;
 printf("stack operations\n");
 printf("1)push the element\n 2)pop the element\n 3)show the elements\n 4) end\n");
 do{//take do while loop to continue
 printf("enter your choice :");
 scanf("%d",&choice);//taking user choice

 switch(choice)
 {
  case 1:push();
  break;
  case 2:pop();
  break;
  case 3:show();
  break;
  case 4:exit(0);
  default:printf("enter invalied coice\n");//using switch function calling  the functions according to user choice
 }
}while(choice<=4);
}

void push( )//definition of push function
{
  int x;
  
  if(top==size-1)//checking the stack is full or not
  printf("overflow\n");
  else
  { 
  printf("enter the element to push\n");
  scanf("%d",&x);//taking the data 
  top=top+1;//top incremented
  stack[top]=x;//data assign to stack
  }
}

void pop()//definition fo pop function
{
 if(top==-1)//checking the stack is empty or not
 {
 printf("stack is underflow\n");
 }
 else// not empty
 {
 printf("poped element is :%d\n",stack[top]);//printing the element
 top=top-1;//decreasing the top value
 }
}

void show()//definition for show function
{
  int i;
 if(top==-1)//checking if any element is available or not
 {
 printf("stack is underflow\n");
 }
 else
 {
  printf("the elements in the stack are:");
  for(i=top;i>=0;i--)
  printf("%d ",stack[i]);//printing the stack datas
 }
 printf("\n");
}















