#include<algo.h>
#include<stdio.h>
int main()
{
int collection[10];
int i,code=0;
printf("Enter data(10 elements) -> ");
for(i=0;i<10;i++)
{
scanf("%d",&collection[i]);
}
code=to_max_heap(&collection[0],10);
printf("Returned code from (to_max_heap) function is : %d\n",code);
printf("Collection converted to max heap -> \n");
for(i=0;i<10;i++)
{
printf("%d ",collection[i]);
}
return 0;
}
