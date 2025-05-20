# 🤖 Functions

A function is a block of code that performs a specific task.

Suppose, you need to create a program to create a circle and color it. You can create two functions to solve this problem:

- create a circle function
- create a color function

Dividing a complex problem into smaller chunks makes our program easy to understand and reuse.

### 📌 Types of function

There are two types of function in C programming:

- Standard library functions 
- User-defined functions

## 🖇️ Standard library functions

Standard library functions or simply C Library functions are inbuilt functions in C programming.

The prototype and data definitions of these functions are present in their respective header files. To use these functions we need to include the header file in our program. For example,

- The `printf()` is a standard library function to send formatted output to the screen (display output on the screen). This function is defined in the `stdio.h` header file.
  Hence, to use the `printf()`function, we need to include the `stdio.h` header file using `#include <stdio.h>`.
- The `sqrt()` function calculates the square root of a number. The function is defined in the `math.h` header file.  
```c++
#include <stdio.h>
int main()
{
   printf("Catch me if you can."); 
}
```
If you try to use `printf()` without including the `stdio.h` header file, you will get an error.

>[🔗 Example: Square root using sqrt() function](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Functions/Ex%20Square%20root%20using%20function.c)

### 📌 Library Functions in Different Header Files

| C Header Files | 	Description |
|----------------|--------------|
|  <assert.h>    | Program assertion functions|
|<ctype.h>	|Character type functions|
|<locale.h>	|Localization functions|
|<math.h>	|Mathematics functions|
|<setjmp.h>	|Jump functions|
|<signal.h>	|Signal handling functions|
|<stdarg.h>	|Variable arguments handling functions|
|<stdio.h>	|Standard Input/Output functions|
|<stdlib.h>	|Standard Utility functions|
|<string.h>	|String handling functions|
|<time.h>	|Date time functions|

## 👩🏻‍💻 User-defined function

You can also create functions as per your need. Such functions created by the user are known as user-defined functions.

### 📌 How user-defined function works?
```c++
#include <stdio.h>
void functionName()
{
    ... .. ...
    ... .. ...
}

int main()
{
    ... .. ...
    ... .. ...

    functionName();
    
    ... .. ...
    ... .. ...
}
```
The execution of a C program begins from the `main()` function.

When the compiler encounters `functionName();`, control of the program jumps to

```c++
 void functionName()
```

And, the compiler starts executing the codes inside `functionName()`.

The control of the program jumps back to the `main()` function once code inside the function definition is executed.

![Working of if Statement](../img/function-c-programming.webp)

> **Note,** function names are identifiers and should be unique.

A function is a block of code that performs a specific task.

C allows you to define functions according to your need. These functions are known as user-defined functions. For example:

Suppose, you need to create a circle and color it depending upon the radius and color. You can create two functions to solve this problem:

- `createCircle()` function
- `color()` function

Here is an example to add two integers. To perform this task, we have created an user-defined `addNumbers()`.
>[🔗 Example: User-defined function](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Functions/Ex%20User-defined%20function.c)

### 📌 Function prototype

A function prototype is simply the declaration of a function that specifies function's name, parameters and return type. It doesn't contain function body.

A function prototype gives information to the compiler that the function may later be used in the program.

**📌 Syntax:**
```c++
returnType functionName(type1 argument1, type2 argument2, ...);
```

In the above example, `int addNumbers(int a, int b);` is the function prototype which provides the following information to the compiler:

1) name of the function is `addNumbers()`
2) return type of the function is `int`
3) two arguments of type `int` are passed to the function

The function prototype is not needed if the user-defined function is defined before the `main()` function.

### 📌 Calling a function

Control of the program is transferred to the user-defined function by calling it.

**Syntax:**
```c++
functionName(argument1, argument2, ...);
```

In the above example, the function call is made using `addNumbers(n1, n2);` statement inside the `main()` function.

### 📌 Function definition

Function definition contains the block of code to perform a specific task. In our example, adding two numbers and returning it.

**Syntx:**
```c++
returnType functionName(type1 argument1, type2 argument2, ...)
{
    //body of the function
}
```
When a function is called, the control of the program is transferred to the function definition. And, the compiler starts executing the codes inside the body of a function.

### 📌 Passing arguments to a function

In programming, argument refers to the variable passed to the function. In the above example, two variables `n1` and `n2` are passed during the function call.

The parameters `a` and `b` accepts the passed arguments in the function definition. These arguments are called formal parameters of the function.

![Working of if Statement](../img/pass-arguments-c-programming.webp)

The type of arguments passed to a function and the formal parameters must match, otherwise, the compiler will throw an error.

If `n1` is of char type, `a` also should be of char type. If `n2` is of float type, variable `b` also should be of float type.

A function can also be called without passing an argument.

### 📌 Return Statement

The return statement terminates the execution of a function and returns a value to the calling function. The program control is transferred to the calling function after the return statement.

In the above example, the value of the `result` variable is returned to the main function. The `sum` variable in the `main()` function is assigned this value.

![Working of if Statement](../img/c-return-statement.webp)

**Syntax:**
```c++
return (expression);
```
**For example,**
```c++
return a;
return (a+b);
```
The type of value returned from the function and the return type specified in the function prototype and function definition must match.

### 📌 Advantages of user-defined function

1) The program will be easier to understand, maintain and debug.
2) Reusable codes that can be used in other programs
3) A large program can be divided into smaller modules. Hence, a large project can be divided among many programmers.

### 📌 Types of User-defined Functions in C Programming

These 4 programs below check whether the integer entered by the user is a prime number or not.

The output of all these programs below is the same, and we have created a user-defined function in each example. However, the approach we have taken in each example is different.

**📌 Example 1:**
>[🔗 Example 1: No Argument Passed and No Return Value](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Functions/Ex%20No%20Argument%20Passed%20and%20No%20Return%20Value.c)

The `checkPrimeNumber()` function takes input from the user, checks whether it is a prime number or not, and displays it on the screen.

The empty parentheses in `checkPrimeNumber();` inside the `main()` function indicates that no argument is passed to the function.

The return type of the function is `void`. Hence, no value is returned from the function.

**📌 Example 2:**
>[🔗 Example 2: No Arguments Passed But Returns a Value](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Functions/Ex%20No%20Arguments%20Passed%20But%20Returns%20a%20Value.c)

The empty parentheses in the `n = getInteger();` statement indicates that no argument is passed to the function. And, the value returned from the function is assigned to `n`.

Here, the `getInteger()` function takes input from the user and returns it. The code to check whether a number is prime or not is inside the `main()` function.

**📌 Example 3:**
>[🔗 Example 3: Argument Passed But No Return Value](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Functions/Ex%20Argument%20Passed%20But%20No%20Return%20Value.c)

The integer value entered by the user is passed to the `checkPrimeAndDisplay()` function.

Here, the `checkPrimeAndDisplay()` function checks whether the argument passed is a prime number or not and displays the appropriate message.

**📌 Example 4:**
>[🔗 Example 4: Argument Passed and Returns a Value](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Functions/Ex%20Argument%20Passed%20and%20Returns%20a%20Value.c)

The input from the user is passed to the `checkPrimeNumber()` function.

The `checkPrimeNumber()` function checks whether the passed argument is prime or not.

If the passed argument is a prime number, the function returns **0**. If the passed argument is a non-prime number, the function returns **1**. The return value is assigned to the `flag` variable.

Depending on whether `flag` is **0** or **1**, an appropriate message is printed from the `main()` function.

### 📌 Which approach is better? 

Well, it depends on the problem you are trying to solve. In this case, passing an argument and returning a value from the function (example 4) is better.

A function should perform a specific task. The `checkPrimeNumber()` function doesn't take input from the user nor it displays the appropriate message. It only checks whether a number is prime or not.

## 🔁 Recursion

Recursion is the process of defining something in terms of itself.

A physical world example would be to place two parallel mirrors facing each other. Any object in between them would be reflected recursively.

In C, we know that a function can call other functions. It is even possible for the function to call itself. These types of construct are termed as recursive functions.

### 📌 How recursion works?
```c++
void recurse()
{
    ... .. ...
    recurse();
    ... .. ...
}

int main()
{
    ... .. ...
    recurse();
    ... .. ...
}
```
![Working of if Statement](../img/how-recursion-works-c_0.jpg)

The recursion continues until some condition is met to prevent it.

To prevent infinite recursion, `if...else` statement (or similar approach) can be used where one branch makes the recursive call, and other doesn't.

>[🔗 Example: Sum of Natural Numbers Using Recursion](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Functions/Ex%20Sum%20of%20Natural%20Numbers%20Using%20Recursion.c)

Initially, the `sum()` is called from the `main()` function with `number` passed as an argument.

Suppose, the value of `n` inside `sum()` is 3 initially. During the next function call, 2 is passed to the `sum()` function. This process continues until `n` is equal to 0.

When `n` is equal to 0, the `if` condition fails and the `else` part is executed returning the sum of integers ultimately to the `main()` function.

![Working of if Statement](../img/recursion-natural-numbers.png)

### 📌 Advantages and Disadvantages of Recursion

Recursion makes program elegant. However, if performance is vital, use loops instead as recursion is usually much slower.

That being said, recursion is an important concept. It is frequently used in data structure and algorithms. For example, it is common to use recursion in problems such as tree traversal.

## ☑️ Storage Class

Every variable in C programming has two properties: type and storage class.

Type refers to the data type of a variable. And, storage class determines the scope, visibility and lifetime of a variable.

There are 4 types of storage class:

1) automatic
2) external
3) static
4) register

### 📌 Local Variable

The variables declared inside a block are automatic or local variables. The local variables exist only inside the block in which it is declared.

Let's take an example.
```c++
#include <stdio.h>

int main(void) {
  
  for (int i = 0; i < 5; ++i) {
     printf("C programming");
  }
  
 // Error: i is not declared at this point
  printf("%d", i);  
  return 0;
}
```
When you run the above program, you will get an error `undeclared identifier i`. It's because `i` is declared inside the `for` loop block. Outside of the block, it's undeclared.

Let's take another example.
```c++

int main() {
    int n1; // n1 is a local variable to main()
}

void func() {
   int n2;  // n2 is a local variable to func()
}
```
In the above example, `n1` is local to `main()` and `n2` is local to `func()`.

This means you cannot access the `n1` variable inside `func()` as it only exists inside `main()`. Similarly, you cannot access the `n2` variable inside `main()` as it only exists inside `func()`.

### 📌 Global Variable

Variables that are declared outside of all functions are known as external or global variables. They are accessible from any function inside the program.

>[🔗 Example Global Variable](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Functions/Ex%20Global%20Variable.c)

Suppose, a global variable is declared in `file1`. If you try to use that variable in a different file `file2`, the compiler will complain. To solve this problem, keyword `extern` is used in `file2` to indicate that the external variable is declared in another file.

### 📌 Register Variable

The `register` keyword is used to declare register variables. Register variables were supposed to be faster than local variables.

However, modern compilers are very good at code optimization, and there is a rare chance that using register variables will make your program faster.

Unless you are working on embedded systems where you know how to optimize code for the given application, there is no use of register variables.

### 📌 Static Variable
A static variable is declared by using the `static` keyword. For example;
```c++
static int i;
```
The value of a static variable persists until the end of the program.

>[🔗 Example Static Variable](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Functions/Ex%20Static%20Variable.c)

During the first function call, the value of `c` is initialized to 1. Its value is increased by 5. Now, the value of `c` is 6, which is printed on the screen.

During the second function call, `c` is not initialized to 1 again. It's because `c` is a static variable. The value `c` is increased by 5. Now, its value will be 11, which is printed on the screen.

<div align="center">

# End of Functions

</div>

### 🤝Clone & Setup
```bash
git clone https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C.git
cd Data-Structures-Algorithms-in-C
```

## 🙌 Contributing
- Pull requests and feedback are welcome! Whether it's fixing bugs, improving UI, or adding features — your help is appreciated.

## 📧 Contact
- **Developer:** Akshit Sonani
- **Email:** sonaniakshit684@gmail.com
- **GitHub:** [SonaniAkshit](https://github.com/SonaniAkshit)

# 🔥 Happy Coding! 🚀
### ⭐ Star this repository if you find it helpful!
