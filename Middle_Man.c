#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
    }
    if (n % 2 != 0)
    {
        int m = (n + 1) / 2;
        printf("%d", arr[m - 1]);
    }
    else
    {
        int fm = n / 2;
        int lm = fm + 1;
        printf("%d %d", arr[fm - 1], arr[lm - 1]);
    }

    return 0;
}
