#include<algo.h>
#include<stdio.h>
int main()
{
int collection[10];
int i=0,code=0;
printf("Enter collection to be sorted -> ");
for(i=0;i<10;++i)
{
scanf("%d",&collection[i]);
}
code=insertion_sort(&collection[0],10,'D');
printf("Returned code is : %d\n",code);
printf("Collection sorted -> ");
for(i=0;i<10;++i)
{
printf("%d ",collection[i]);
}
return 0;
}
