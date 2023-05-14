#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int sum, a, b, c;
        scanf("%d %d %d %d", &sum, &a, &b, &c);
        int num = sum - (a + b + c);

        printf("%d\n", num);
    }

    return 0;
}
