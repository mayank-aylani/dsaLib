*This library file is created for using only on (Ubuntu System)

The <algo.h> library is complied under,
(gcc (Ubuntu 11.4.0-1ubuntu1~22.04.2) 11.4.0)

*if O_nsort, O_n2sort, selection_sort and insertion_sort function returns (collection_size-1) number, should be interpreted as collection is sorted successfully.

*if to_max_heap, to_min_heap function returns (collection_size-1) number, means given collection is successfully converted to provided requirement.

| error_code |      reason       |
|      	     |		         |
|     2      | INVALID ARGUEMENT |


The <stack.h> library is compiled under,
(gcc (Ubuntu 11.4.0-1ubuntu1~22.04.2) 11.4.0)

* init_stack() method accepts the size of stack, one want to initialize.
        eg. init_stack(100), an stack of 100 element size will be allocated
* push() method accepts data to be pushed on the stack, data will always be pushed on the top of stack
        eg. push(151), element 151 will be pushed in the top
* pop() function does not accept any arguement, it returns the top element of the stack
        eg. pop(), than taking a variable let(int value), one should accept the popped data into it,
            i.e, (int value=pop())
* is_empty() function returns TRUE(1) if stack is empty,else FALSE(0)
* is_full() function returns TRUE(1) if stack is full,else FALSE(0)

