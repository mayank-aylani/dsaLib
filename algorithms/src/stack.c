#include<stack.h>
#include<stdlib.h>
void stack(int stack_size)
{
stack=(int *)malloc(sizeof(int)*stack_size);
size=stack_size;
}
void push(int data)
{
--top;
stack[top]=data;
}
int pop()
{
int data=stack[top];
++top;
return data;
}

