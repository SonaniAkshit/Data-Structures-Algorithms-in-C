#include <stdio.h>
void main() {
    int num;

    printf("\nEnter an integer number: ");
    // scanf("%d",&num);

    if (scanf("%d",&num)!=1) { // check the value is string or number
        printf("\nInvalid Input: String");
    }
    else {
        printf("\nThe number is: %d",num);
    }
    printf("\nThis is an example of if statement");
}