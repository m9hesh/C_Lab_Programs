//Stack implementation using Stack and Arrays
#include<stdio.h>
#include<conio.h>
#define SIZE 10

struct stack{
    int list[SIZE];
    int top;
}sp;
//PUSH method
void push(int x){
  if(sp.top==SIZE-1)
    printf("\n Stack is empty UNDERFLOW");
  else
    sp.list[++sp.top]=x;
  return;
}
//POP method
void pop(){
  if(sp.top==-1)
    printf("Stack is Empty");
  else{
    printf("\n Poped Element is %d", sp.list[sp.top]);
    sp.top--;
  }
  return;
}
//PEEK method
void peek(){
  if(sp.top==-1)
    printf("\n STACK is Empty, i.e. UNDERFLOW");
  else
    printf("\n toppest element %d", sp.list[sp.top]);
  return;
}
//SHOW method
 void show(){
   int i;
   printf("\n Stack elements are \n");
   if(sp.top==-1)
     printf("\n STACK is Empty");
   else
     for(i=sp.top;i>=0;i--)
       printf("%d\n", sp.list[i]);
   return;
 }

//main method
int main(){
  int x, opt=1;
  sp.top=-1;
  
  while(opt!=5){
    printf("\n 1.PUSH \n 2.POP\n 3.PEEK\n 4.SHOW \n\n Enter Your Choice: \n");
    scanf("%d",&opt);
    
    switch(opt){
      case 1:
        printf("\n Enter The No:");
        scanf("%d",&x);
        push(x);
        break;
      case 2:
        pop();
        break;
      case 3:
        peek();
        break;
      case 4:
        show();
        break;
        default:
        printf("\n Please Enter a Valid Choice");
      }
   }
  return 0;
}
