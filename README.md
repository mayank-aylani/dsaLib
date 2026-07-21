dsaLib — A Data Structures & Algorithms Library in C
> Had you ever used STL (C++) or the Collections framework (Java) and wondered how those libraries are actually built? This project is me answering that question by building my own — in C.
About
`dsaLib` is a from-scratch data structures and algorithms library written in C, packaged as reusable static libraries (`.a`) you can link into any C program. It reimplements the kind of functionality high-level languages hand you for free — so I could understand what's happening underneath.
The library is split into two modules:
`algo.h` — sorting and heap algorithms
`stack.h` — an array-backed stack
Tech used
C (GNU C, `gcc 11.4.0` on Ubuntu 22.04)
Static library packaging (`ar` → `libalgo.a`, `libstack.a`)
Modular layout: `include/` (headers), `src/` (implementation), `lib/` (compiled archives), `testcases/` (per-function tests)
Features
`algo.h`
Function	Purpose
`O_nsort`, `O_n2sort`	O(n²) comparison sorts
`selection_sort`	Selection sort
`insertion_sort`	Insertion sort
`shell_sort`	Shell sort
`n_lognsort`	O(n·log n) sort
`to_max_heap`, `to_min_heap`	Heapify an array into a max/min heap
All sorting functions take `(int *collection, int size, char order)` where `order` is `'A'` (ascending) or `'D'` (descending), and return the completed cycle count — a value of `size - 1` signals a successful sort. Invalid arguments return error code `2`.
`stack.h`
An array-based integer stack (up to 10⁷ elements):
`init_stack(size)`, `push(x)`, `pop()`, `is_empty()`, `is_full()`.
Documentation & usage
```c
#include "algo.h"

int data[] = {5, 2, 9, 1, 3};
int rc = insertion_sort(data, 5, 'A');   // ascending
// rc == 4 (size-1) => sorted successfully
// rc == 2          => invalid argument
```
```c
#include "stack.h"

init_stack(100);      // allocate a stack of 100 ints
push(151);            // push onto the top
if (!is_empty()) {
    int value = pop(); // pop the top element
}
```
Compile & link (Ubuntu / gcc):
```bash
gcc your_program.c -I dsaLib/algorithms/include -L dsaLib/algorithms/lib -lalgo -o app
gcc your_program.c -I dsaLib/structures/include  -L dsaLib/structures/lib  -lstack -o app
```
Project structure
```
dsaLib/
├── algorithms/   # algo.h — sorting & heap
│   ├── include/  ├── src/  ├── lib/  └── testcases/
└── structures/   # stack.h — array stack
    ├── include/  ├── src/  ├── lib/  └── testcases/
```
What I learned
Manual memory and pointer arithmetic, the internal mechanics of classic sorting algorithms, heapification, designing a clean C API with error codes, and packaging code into reusable static libraries — the things STL and Collections quietly do for you.
Status
Actively expanding — more data structures (queues, linked lists, trees) are on the roadmap.
---
Built by Mayank Aylani while learning systems-level programming in C.
