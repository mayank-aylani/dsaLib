#include<algo.h>
#include<stdio.h>
int main()
{
int collection[10];
int code;
printf("Enter data to be sorted -> ");
for(int i=0;i<10;++i)
{
scanf("%d",&collection[i]);
}
code=O_n2Sort(collection,10,'A');
if(code==10-1) printf("Collection sorted -> \n");
printf("Returned code is : %d\n",code);
for(int i=0;i<10;++i)
{
printf("%d ",collection[i]);
}
return 0;
}

