#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for(int i=0; i<n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
            printf("\n");
        
    }


    return 0;
}
