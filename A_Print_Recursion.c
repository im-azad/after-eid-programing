#include <stdio.h>
void my_fun(int i, int n)
{
    if (i == n + 1)
        return;

    printf("I love Recursion\n");
    my_fun(i + 1, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    my_fun(1, n);
    return 0;
}
