#include<algo.h>
#include<stdio.h>
int main()
{
int collection[10];
int code=0;
printf("Enter data to be sorted-> ");
for(int i=0;i<10;i++)
{
scanf("%d",&collection[i]);
}
code=O_n2sort(collection,10,'D');
printf("Returned code : %d\n",code);
printf("Collection sorted-> ");
for(int i=0;i<10;i++)
{
printf("%d ",collection[i]);
}
return 0;
}
