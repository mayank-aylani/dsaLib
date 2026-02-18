#include<algo.h>
#include<stdio.h>
int main()
{
int collection[10],i,code;
printf("Enter collection -> ");
for(i=0;i<10;i++)
{
scanf("%d",&collection[i]);
}
code=n_lognsort(&collection[0],10,'A');
printf("Returned code from (n_lognsort) function is : %d\n",code);
printf("Collection sorted using heap-sort -> \n");
for(i=0;i<10;i++)
{
printf("%d ",collection[i]);
}
return 0;
}
