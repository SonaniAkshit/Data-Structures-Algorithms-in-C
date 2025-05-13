# 🧑🏻‍💻Getting Started with ©️
- ***C is a powerful general-purpose programming language known for its efficiency and flexibility***.

# C Flow Control

## 1) C if...else Statement

### C if Statement:
- *The syntax of the if statement in C programming is:*
```c++
if (test expression) 
{
   // code
}
```
- *example*
>[Working of if Statement](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/C%20if%20else%20Statement/if%20statement.c)

### How if statement works?
- *The if statement evaluates the test expression inside the parenthesis ().*
> - If the test expression is evaluated to true, statements inside the body of `if` are executed.
> - If the test expression is evaluated to false, statements inside the body of `if` are not executed.

### Working of if Statement
![Working of if Statement](img/working-c-if-statement.webp)


### C if...else Statement
- *The `if` statement may have an optional `else` block. The syntax of the `if..else` statement is:*
```c++
if (test expression) {
    // run code if test expression is true
}
else {
    // run code if test expression is false
}
```
- *example*
>[Working of if...else Statement](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/C%20if%20else%20Statement/if%20else%20statement.c)

### How if...else statement works?
- *If the test expression is evaluated to true,*
> - statements inside the body of `if` are executed.
> - statements inside the body of `else` are skipped from execution.
- *If the test expression is evaluated to false,*
> - statements inside the body of `else` are executed
> - statements inside the body of if are skipped from execution.

### Working of if...else Statement
![Working of if Statement](img/how-if-else-works-c-programming.webp)

### C if...else Ladder
- *The `if...else` statement executes two different codes depending upon whether the test expression is true or false. Sometimes, a choice has to be made from more than 2 possibilities.*
- *The **if...else ladder** allows you to check between multiple test expressions and execute different statements.*
- *Syntax of `if...else` Ladder*
```c++
if (test expression1) {
   // statement(s)
}
else if(test expression2) {
   // statement(s)
}
else if (test expression3) {
   // statement(s)
}
.
.
else {
   // statement(s)
}
```
- *example*
>[Working of if...else Ladder](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/C%20if%20else%20Statement/if%20else%20Ladder.c)

### Nested if...else
- *It is possible to include an `if...else` statement inside the body of another `if...else` statement.*

- ***Example***
  - This program given below relates two integers using either `<`,` >` and `=` similar to the `if...else` ladder's example. However, we will use a nested `if...else` statement to solve this problem.
>[Working of Nested if...else](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/C%20if%20else%20Statement/Nested%20if...else.c)
