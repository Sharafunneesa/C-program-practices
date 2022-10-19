#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,stack[size];
void push();
void pop();
void show();

void main()
{
 int choice;
 printf("stack operations\n");
 printf("1)push the element\n 2)pop the element\n 3)show the elements\n 4) end\n");
// printf("enter your choice :");
// scanf("%d",&choice);
 do{
 printf("enter your choice :");
 scanf("%d",&choice);

 switch(choice)
 {
  case 1:push();
  break;
  case 2:pop();
  break;
  case 3:show();
  break;
  case 4:exit(0);
  default:printf("enter invalied coice\n");
 }
}while(choice<=4);
}
void push( )
{
  int x;
  
  if(top==size-1)
  printf("overflow\n");
  else
  { 
  printf("enter the element to push\n");
  scanf("%d",&x);
  top=top+1;
  stack[top]=x;
  }
}

void pop()
{
 if(top==-1)
 {
 printf("stack is underflow\n");
 }
 else
 {
 printf("poped element is :%d\n",stack[top]);
 top=top-1;
 }
}

void show()
{
  int i;
 if(top==-1)
 {
 printf("stack is underflow\n");
 }
 else
 {
  printf("the elements in the stack are:");
  for(i=top;i>=0;i--)
  printf("%d ",stack[i]);
 }
 printf("\n");
}















