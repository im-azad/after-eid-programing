#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf(" *");
        }

        printf("\n");
        k++;
    }

    return 0;
}
