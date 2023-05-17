#include <stdio.h>
void num_print(int i, int n)
{
    if(i == n+1) return;
    printf("%d\n",i);
    num_print(i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    num_print(1,n);
    return 0;
}
