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

int selection_sort(int *collection,int collection_size,char order)
{
if(collection==NULL) return 2;
if(collection_size<=0) return 2;
if(order!='A' && order!='D') return 2;
int in=0,out=0,swap_pointer=0,tmp=0;
int cycle_count=0;
if(order=='A')
{
while(in<=collection_size-2)
{
swap_pointer=in;
out=in+1;
while(out<=collection_size-1)
{
if(*(collection+out)<*(collection+swap_pointer))
{
swap_pointer=out;
}
++out;
}
tmp=*(collection+swap_pointer);
*(collection+swap_pointer)=*(collection+in);
*(collection+in)=tmp;
++in;
++cycle_count;
}
}
else
{
while(in<collection_size-1)
{
swap_pointer=in;
out=in+1;
while(out<collection_size)
{
if(*(collection+out)>*(collection+swap_pointer))
{
swap_pointer=out;
}
++out;
}
tmp=*(collection+swap_pointer);
*(collection+swap_pointer)=*(collection+in);
*(collection+in)=tmp;
++in;
++cycle_count;
}
}
return cycle_count;
}

int insertion_sort(int *collection,int collection_size,char order)
{
if(collection==NULL) return 2;
if(collection_size<=0) return 2;
if(order!='A' && order!='D') return 2;
int y=0,key=0,z=0;
int cycle_count=0;
y=1;
if(order=='A')
{
while(y<collection_size)
{
key=*(collection+y);
z=y-1;
while(z>-1 && *(collection+z)>key)
{
*(collection+z+1)=*(collection+z);
--z;
//++cycle_count; either we will increment it here or outer, output will be same
}
*(collection+z+1)=key;
++y;
++cycle_count;
}
}
else
{
while(y<collection_size)
{
key=*(collection+y);
z=y-1;
while(z>-1 && *(collection+z)<key)
{
*(collection+z+1)=*(collection+z);
--z;
}
*(collection+z+1)=key;
++y;
++cycle_count;
}
}
return cycle_count;
}
