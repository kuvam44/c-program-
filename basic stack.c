#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 100
typedef struct
{
    int ar[MAX_SIZE];
    int top;

} stack;
void initialize(stack *stack)
        {
            stack->top = -1;
        }

bool isempty(stack *stack)
{
    return stack->top==-1;
}
bool isfull(stack *stack)
{
    return stack->top== MAX_SIZE-1;
}
void push( stack *stack,int value )
{
    if(isfull(stack)){
        printf("stack overflow");
  return;    }
 stack->ar[++stack->top]=value;
 printf("\npushed %d on the stack",value);
}
int pop(stack *stack)
{
    if(isempty(stack))
    {
        printf("\nstack underflow");
        return -1;
    }
    int popped =stack->ar[stack->top];
    printf("\n%d popped",popped);
    return popped;
}
 int peek(stack *stack)
 {
     if(isempty(stack))
     {
         printf("\n stack is empty");
         return -1;
     }
     return stack->ar[stack->top];


 }


int main()
{


stack stack;
initialize(&stack);
push(&stack,4);
printf("%d is the top value",peek(&stack));
push(&stack,5);
printf("%d is top",peek(&stack));
push(&stack,6);
printf("%d is top",peek(&stack));
push(&stack,8);
printf("%d is top",peek(&stack));

    while(!isempty(&stack))
 {
     printf("top element:%d\n",peek(&stack));
     printf("popped element %d\n",pop(&stack));
 }
 return 0;
}
