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

int shell_sort(int *collection,int collection_size,char order)
{
if(collection==NULL) return 2;
if(collection_size<=0) return 2;
if(order!='A' && order!='D') return 2;
int y=0,key=0,z=0;
int lower_bound=0,upper_bound=collection_size-1;
int skip=collection_size/2;
if(order=='A')
{
while(skip>=1)
{
y=lower_bound+skip;
while(y<=upper_bound)
{
key=*(collection+y);
z=y-skip;
while(z>-1 && *(collection+z)>key)
{
*(collection+z+skip)=*(collection+z);
z-=skip;  //z=z-skip
}
*(collection+z+skip)=key;
y+=skip;
}
skip=skip/2;
}
}
else
{
while(skip>=1)
{
y=lower_bound+skip;
while(y<=upper_bound)
{
key=*(collection+y);
z=y-skip;
while(z>-1 && *(collection+z)<key)
{
*(collection+z+skip)=*(collection+z);
z-=skip;
}
*(collection+z+skip)=key;
y+=skip;
}
skip=skip/2;
}
}
}

int to_max_heap(int *collection,int collection_size)
{
int lower_bound=0,upper_bound=1;
int root_index=0,child_index=0;
int tmp=0;
while(upper_bound<collection_size)
{
child_index=upper_bound;
while(child_index>0)
{
root_index=((child_index-1)/2);
if(collection[child_index]>collection[root_index])
{
tmp=collection[root_index];
collection[root_index]=collection[child_index];
collection[child_index]=tmp;
child_index=root_index;
}
else break;
}
++upper_bound;	
}
}

int n_lognsort(int *collection,int collection_size,char order)
{
to_max_heap(&collection[0],collection_size); //call, to convert given collection into max-heap
int upper_bound=collection_size-1,lower_bound=0;
int root_index=0,left_child_index=0,right_child_index=0;
int swapping_index=0;
int tmp=0;
while(upper_bound>=1)
{
//as collection is arranged as max-heap, the highest weight element is present at 0th index
//swapping 0th index element with last index
tmp=collection[lower_bound];
collection[lower_bound]=collection[upper_bound];
collection[upper_bound]=tmp;
--upper_bound;
//after swapping, adjusting collection as max-heap
while(root_index<upper_bound)
{
left_child_index=((root_index*2)+1);
if(left_child_index>upper_bound) break;
right_child_index=(left_child_index+1);
if(right_child_index>upper_bound)
{
swapping_index=left_child_index;
}
else
{
//means we have both left_child and right_child
if(collection[left_child_index]>collection[right_child_index]) swapping_index=left_child_index;
else swapping_index=right_child_index;
}
//swapping data to adjust heap
if(collection[swapping_index]>collection[root_index])
{
tmp=collection[root_index];
collection[root_index]=collection[swapping_index];
collection[swapping_index]=tmp;
root_index=swapping_index;  //as swapped, maybe child indexes get disturbed
}
else break;
}
}
}
