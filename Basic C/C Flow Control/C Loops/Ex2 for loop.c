// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers

#include <stdio.h>
void main() {
    int num, i,sum=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        sum += i;
    }

    printf("The sum of the given number is %d", sum);
}