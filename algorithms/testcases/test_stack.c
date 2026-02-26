#include<stack.h>
#include<stdio.h>
int main()
{
int size,data;
int i;
printf("Enter stack size : ");
scanf("%d",&size);
init_stack(size);
printf("Enter data to be pushed on stack(%d elements) : ",size);
for(i=0;i<size;++i)
{
scanf("%d",&data);
push(data);
}
printf("Data pushed on stack\n");
return 0;
}

