#include<stddef.h> //for NULL identifier 
int O_nsort(int *collection,int collection_size,char order)
{ 
if(collection==NULL) return 2;
if(collection_size<=0) return 2;
if(order!='A' && order!='D') return 2; //error_code=2 for invalid arguement
int in=0,out=0,tmp=0;
int cycle_count=0; //collection_size-1 will be cycle_count 
if(order=='A')
{
while(in<=collection_size-2)
{
out=in+1;
while(out<=collection_size-1)
{
if(collection[out]<collection[in])
{
tmp=collection[in];
collection[in]=collection[out];
collection[out]=tmp;
}
++out;
}
++cycle_count;
++in;
}
}
else //order is 'D'(Descending)
{
while(in<=collection_size-2)
{
out=in+1;
while(out<=collection_size-1)
{
if(collection[in]<collection[out])
{
tmp=collection[out];
collection[out]=collection[in];
collection[in]=tmp;
}
++out;
}
++cycle_count;
++in;
}
}
return cycle_count; //if cycle_count is (collection_size-1) collection is successfully sorted
}

int O_n2sort(int *collection,int collection_size,char order)
{
if(collection==NULL) return 2;
if(collection_size<=0) return 2;
if(order!='A' && order!='D') return 2;
int cycles=0,in=0,out=0,tmp=0;
int cycle_count=0;
cycles=collection_size-2;
if(order=='A')
{
while(cycles>-1)
{
in=0,out=1;
while(in<=cycles)
{
if(*(collection+out)<*(collection+in)) //collection[out]<collection[in]
{
tmp=*(collection+in);
*(collection+in)=*(collection+out);
*(collection+out)=tmp;
} 
++in,++out;
}
++cycle_count; //if (cycle_count) is equals to (collection_size-1), sorting successfull
--cycles;
}
}
else
{
while(cycles>-1)
{
in=0,out=1;
while(in<=cycles)
{
if(*(collection+in)<*(collection+out))
{
tmp=*(collection+out);
*(collection+out)=*(collection+in);
*(collection+in)=tmp;
}
++in,++out;
}
++cycle_count;
--cycles;
}
}
return cycle_count; 
}

int O_n2Sort(int *collection,int collection_size,char order)
{
if(collection==NULL) return 2;
if(collection_size<=0) return 2;
if(order!='A' && order!='D') return 2;
}
