# 🔁 Flow Control

## 1) `if...else` Statements in C

### ✅ Simple `if` Statement
📌 **Syntax:**
```c++
if (test expression) 
{
   // code
}
```
>[🔗 Example: `if` Statement](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/Ex%20if%20statement.c)

### 📌 How if statement works?
- The if statement evaluates the test expression inside the parenthesis ().
  - If the test expression is evaluated to true, statements inside the body of `if` are executed.
  - If the test expression is evaluated to false, statements inside the body of `if` are not executed.

### 📝 Working of if Statement
![Working of if Statement](../img/working-c-if-statement.webp)


### ⚖️ `if...else` Statement
The `if` statement may have an optional `else` block.

📌 **Syntax:**
```c++
if (test expression) {
    // run code if test expression is true
}
else {
    // run code if test expression is false
}
```
>[🔗 Example: `if...else` Statement](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/Ex%20if%20else%20statement.c)

### 📌 How if...else statement works?
- If the test expression is evaluated to true,
  - statements inside the body of `if` are executed.
  - statements inside the body of `else` are skipped from execution.
- If the test expression is evaluated to false,
  - statements inside the body of `else` are executed
  - statements inside the body of if are skipped from execution.

### 📝 Working of if...else Statement
![Working of if Statement](../img/how-if-else-works-c-programming.webp)

### 🪜 `if...else if` Ladder
The `if...else` statement executes two different codes depending upon whether the test expression is true or false. Sometimes, a choice has to be made from more than 2 possibilities.*

The **if...else ladder** allows you to check between multiple test expressions and execute different statements.*

📌 **Syntax:**
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
>[🔗 Example: `if...else if` Ladder](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/Ex%20if%20else%20Ladder.c)

### 🧩 Nested if...else
It is possible to include an `if...else` statement inside the body of another `if...else` statement.*

**Example:**

This program given below relates two integers using either `<`,` >` and `=` similar to the `if...else` ladder's example. However, we will use a nested `if...else` statement to solve this problem.
>[🔗 Example: Nested `if...else`](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/Ex%20Nested%20if%20else.c)

- **If the body of an `if...else` statement has only one statement, you do not need to use brackets `{}`.**

For example, this code
```c++
if (a > b) {
    printf("Hello");
}
printf("Hi");
```
- *is equivalent to*
```c++
if (a > b)
    printf("Hello");
printf("Hi");
```
---
## 2) Loops
In programming, a loop is used to repeat a block of code until the specified condition is met.

C programming has three types of loops:
1) `for` loop ✅
2) `while` loop ⏳
3) `do...while` loop 🔁

## 🧮 `for` Loop

📌 **Syntax**:
```c++
for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}
```
### 📌 How for loop works?

The initialization runs once.

The test condition is checked:
- If true: execute the loop body.
- If false: exit the loop.

After each iteration, the update statement runs.

Repeat until the test condition becomes false.

### 📈 Flowchart of `for` loop:
![Working of for loop](../img/c-for-loop.webp)

>[🔗 Example1: `for` Loop](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/Ex1%20for%20loop.c)

>[🔗 Example2: `for` Loop](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/Ex2%20for%20loop.c)

## 🧮 `while`  Loop

📌 **Syntax**:
```c++
while (testExpression) {
  // the body of the loop 
}
```
### 📌 How while loop works?
The `while` loop evaluates the `testExpression` inside the parentheses `()`.

If `testExpression` is **true,** statements inside the body of `while` loop are executed. 
Then, `testExpression` is evaluated again.

The process goes on until `testExpression` is evaluated to **false.**

If `testExpression` is **false,** the loop terminates (ends).

### 📈 Flowchart of while loop
![Working of for loop](../img/c-while-loop_0.webp)
>[🔗 Example `while` loop](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/Ex%20while%20loop.c)

## 🧮 `do...while`  Loop
The `do..while` loop is similar to the `while` loop with one important difference. The body of `do...while` loop is executed at least once. Only then, the test expression is evaluated.

📌 **Syntax**:
```c++
do {
  // the body of the loop
}
while (testExpression);
```

### 📌 How do...while loop works?

The body of `do...while` loop is executed once. Only then, the `testExpression` is evaluated.

If `testExpression` is **true,** the body of the loop is executed again and `testExpression` is evaluated once more.

This process goes on until testExpression becomes **false.**

If `testExpression` is **false,** the loop ends.

### 📈 Flowchart of do...while loop
![Working of for loop](../img/c-do-while-loop_0.webp)
>[🔗 Example `do...while` loop](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/Ex%20do%20while%20loop.c)


# 3) Break and continue in C

## Break

**📌 Syntax:**
```c++
break;
```

The break statement is almost always used with `if...else` statement inside the loop.

### 📝 How break statement works?
![Working of for loop](../img/c-break-statement-works.webp)
>[🔗 Example `break;` statement](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/Ex%20break%20statement.c)

This program calculates the sum of a maximum of 10 numbers. Why a maximum of 10 numbers? It's because if the user enters a negative number, the `break` statement is executed. This will end the `for` loop, and the `sum` is displayed.

In C, `break` is also used with the `switch` statement.

## Continue

The `continue` statement skips the current iteration of the loop and continues with the next iteration

**📌 Syntax:**
```c++
continue;
```
The `continue` statement is almost always used with the `if...else` statement.

### 📝 How Continue statement works?
![Working of for loop](../img/c-continue-statement-works.webp)
>[🔗 Example `continue;` statement](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/Ex%20continue%20statement.c)

In this program, when the user enters a positive number, the sum is calculated using `sum += number;` statement.

When the user enters a negative number, the `continue` statement is executed and it skips the negative number from the calculation.

## 4) switch Statement 

The switch statement allows us to execute one code block among many alternatives.

You can do the same thing with the `if...else..if` ladder. However, the syntax of the `switch` statement is much easier to read and write.

**📌 Syntax:**
```c++
switch (expression)
{
    case constant1:
      // statements
      break;

    case constant2:
      // statements
      break;
    .
    .
    .
    default:
      // default statements
}
```

### 📌 How does the switch statement work?

The `expression` is evaluated once and compared with the values of each `case` label.
  
  -  If there is a match, the corresponding statements after the matching label are executed. For example, if the value of the expression is equal to `constant2`, statements after `case constant2:` are executed until `break` is encountered.
  -  If there is no match, the default statements are executed.
  > **Notes:** 
  > - If we do not use the `break` statement, all statements after the matching label are also executed. 
  > - The `default` clause inside the `switch` statement is optional.

### 📈 switch Statement Flowchart
![Working of for loop](../img/flowchart-switch-statement.webp)
>[🔗 Example `switch` statement](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/Ex%20switch%20statement.c)


# 5) goto Statement

The `goto` statement allows us to transfer control of the program to the specified `label`.

**📌 Syntax:**
```c++
goto label;
... .. ...
... .. ...
label: 
statement;
```

The `label` is an identifier. When the `goto` statement is encountered, the control of the program jumps to `label:` and starts executing the code.

### 📌 How does the goto statement work?

![Working of for loop](../img/c-goto-statement.webp)
>[🔗 Example `goto` statement](https://github.com/SonaniAkshit/Data-Structures-Algorithms-in-C/blob/main/Basic%20C/C%20Flow%20Control/Ex%20goto%20Statement.c)

### 📌 Should you use goto?

If you think the use of `goto` statement simplifies your program, you can use it. That being said, `goto` is rarely useful and you can create any C program without using `goto` altogether.

***"The fact that 'goto' can do anything is exactly why we don't use it."***

<div align="center">

# End of Flow Control

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
