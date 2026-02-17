#include<algo.h>
#include<stdio.h>
int main()
{
int collection[10];
int i;
printf("Enter data -> ");
for(i=0;i<10;i++)
{
scanf("%d",&collection[i]);
}
to_max_heap(&collection[0],10);
printf("Collection converted to max heap -> \n");
for(i=0;i<10;i++)
{
printf("%d ",collection[i]);
}
return 0;
}
