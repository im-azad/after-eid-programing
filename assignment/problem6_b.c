#include <stdio.h>

// When passing arguments by reference, instead of passing the actual value, a reference or address of the variable is passed to the function. This allows the function to modify the original value directly.
// pass by reference change the original value
void pass_reference(int *ptr) { // accept a pointer
    *ptr = 10; 
    printf("Inside the function: %d\n", *ptr);
}

int main() {
    int numb = 5;
    printf("Before the function call: %d\n", numb);
    pass_reference(&numb);  // passing value reference or memory addressing
    printf("After the function call: %d\n", numb);
    return 0;
}