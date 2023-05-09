#include <stdio.h>

//The change is only reflected within the function scope
// Any changes made to the parameter within the function do not affect the original value.
void pass_value (int num)
{
    num = 100;
    printf("Inside the function: %d\n", num);
}
int main()
{
    int x = 50;
  printf("Before the function call: %d\n", x); 
    pass_value(x);  // Passing by value
    printf("After the function call: %d\n", x);

    return 0;
}
