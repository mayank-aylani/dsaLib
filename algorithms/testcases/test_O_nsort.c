#include<algo.h>
#include<stdio.h>
{
int collection[5];
printf("Enter data to be sorted ->");
for(int i=0;i<5;++i)
{
scanf("%d",&collection[i]);
}
O_nsort(&collection,5,'A');
printf("Data sorted ->");
for(int i=0;i<5;++i)
{
printf("%d\t",collection[i]);
}
return 0;
}
