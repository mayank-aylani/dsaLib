#include<stack.h>
#include<stdlib.h>  //for (malloc)
#include<stddef.h>
#include<stdbool.h>
int *stack=NULL;
int size,top;
void init_stack(int stack_size)
{
stack=(int *)malloc(sizeof(int)*stack_size);
size=stack_size;
top=stack_size;
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
bool is_empty()
{
if(top==size)
{
return TRUE;
}
else
{
return FALSE;
}
}
bool is_full()
{
if(top==0)
{
return TRUE;
}
else
{
return FALSE;
}
}
