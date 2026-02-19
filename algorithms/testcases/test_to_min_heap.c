#include<algo.h>
#include<stdio.h>
int main()
{
int collection[15];
int i,code=0;
printf("Enter collection(15 elements) -> ");
for(i=0;i<15;++i)
{
scanf("%d",&collection[i]);
}
code=to_min_heap(&collection[0],15);
printf("Returned code from(to_min_heap) function is : %d\n",code);
printf("Collection converted into min-heap -> \n");
for(i=0;i<15;++i)
{
printf("%d ",collection[i]);
}
return 0;
}
