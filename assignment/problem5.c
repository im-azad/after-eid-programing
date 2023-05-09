#include <stdio.h>
#include <string.h>

// int is_palindrome(char str[100])
// {
//     int flag = 1;
//     int i = 0;
//     int j = strlen(str) - 1;

//     for (i, j; i < j; i++, j--)

//     {
//         if (str[i] != str[j])
//         {
//             flag = 0;
//             break;
//         }
//     }
//     return flag;
// }

// Driver program to test above function
int main()
{
    char str[100];
    scanf("%s", str);
    int i, j, flag = 1;
    int len = strlen(str);
        printf("%d length",len);
    for (i=0, j=len -1; i < j; i++, j--)
    {
        printf("%d \n", str[i]);
        printf("%d \n", str[j]);
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }

    if (flag = 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}