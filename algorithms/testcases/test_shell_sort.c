#include<stdio.h>
#include<algo.h>
int main()
{
int collection[10],code;
printf("Enter collection data -> ");
for(int i=0;i<10;++i)
{
scanf("%d",&collection[i]);
}
code=shell_sort(&collection[0],10,'A');
printf("Returned code : %d",code);
printf("Data sorted -> ");
for(int i=0;i<10;++i)
{
printf("%d ",collection[i]);
}
return 0;
}
