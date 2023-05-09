#include <stdio.h>
void last_digit(void)
{

    int x;
    scanf("%d", &x);
    int digit = x % 10;
    printf("%d", digit);
}

int main()
{

    last_digit();

    return 0;
}