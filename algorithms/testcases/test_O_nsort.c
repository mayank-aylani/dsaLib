#include<algo.h>
#include<stdio.h>
int main()
{
int collection[10];
int code=0;
printf("Enter data to be sorted -> ");
for(int i=0;i<10;++i)
{
scanf("%d",&collection[i]);
}
code=O_nsort(collection,10,'D');
printf("Returned code is : %d\n",code);
printf("Data sorted -> ");
for(int i=0;i<10;++i)
{
printf("%d ",collection[i]);
}
return 0;
}
