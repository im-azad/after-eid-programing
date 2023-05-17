
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n, k=1;
    scanf("%d",&n);
    int  s= n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            if(i%2 != 0)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        s--;
        k=k+2;
        printf("\n");
        
    }
    return 0;
}
