# 🌟 Pointers

Pointers are powerful features of C and C++ programming. Before we learn pointers, let's learn about addresses in C programming.

## ✨ Address in C
If you have a variable `var` in your program, `&var` will give you its address in the memory.

We have used address numerous times while using the `scanf()` function.
```c++
scanf("%d", &var);
```
Here, the value entered by the user is stored in the address of var variable. Let's take a working example.
```c++
#include <stdio.h>
int main()
{
  int var = 5;
  printf("var: %d\n", var);

  // Notice the use of & before var
  printf("address of var: %p", &var);  
  return 0;
}
```
**Output**
```c++
var: 5 
address of var: 2686778
```
>**Note:** You will probably get a different address when you run the above code.

## 🔆 Pointers

Pointers (pointer variables) are special variables that are used to store addresses rather than values.

**Pointer Syntax:**
Here is how we can declare pointers.
```c++
int* p;
```
Here, we have declared a pointer `p` of `int` type.

You can also declare pointers in these ways.
```c++
int *p1;
int *p2
```
Let's take another example of declaring pointers.
```c++
int* p1,p2;
```
Here, we have declared a pointer `p1` and a normal variable `p2`.

### 📌 Assigning addresses to Pointers
Let's take an example.
```c++
int* pc, c;
c = 5;
pc = &c;
```
Here, 5 is assigned to the `c` variable. And, the address of `c` is assigned to the `pc` pointer.

### 📌 Get Value of Thing Pointed by Pointers
To get the value of the thing pointed by the pointers, we use the * operator. For example:
```c++
int* pc, c;
c = 5;
pc = &c;
printf("%d", *pc);   // Output: 5
```
Here, the address of `c` is assigned to the `pc` pointer. To get the value stored in that address, we used `*pc`.

>**Note:** In the above example, `pc` is a pointer, not `*pc`. You cannot and should not do something like `*pc = &c`;
> 
> By the way, `*` is called the dereference operator (when working with pointers). It operates on a pointer and gives the value stored in that pointer.