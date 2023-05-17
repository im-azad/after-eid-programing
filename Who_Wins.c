#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    scanf("%d", &n);
    int num1, num2;
    int ti = 0, pa = 0, d = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &num1, &num2);
        if (num1 < num2)
        {
             pa++;
        }
        else if (num1 > num2)
        {
            ti++;
        }
        else
        {
           
            d++;
        }
    }

     if (ti > pa)
    {
        printf("Tiger");
    }
    else if (ti < pa)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }

    return 0;
}
