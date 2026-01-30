void O_nsort(int *collection,int size,char order)
{
int in=0,out=0,tmp=0;
while(in<=size-2)
{
out=in+1;
while(out<=size-1)
{
if(collection[out]<collection[in])
{
tmp=collection[in];
collection[in]=collection[out];
collection[out]=tmp;
}
++out;
}
++in;
}
}
