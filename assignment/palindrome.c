#include <stdio.h>
#include <string.h>


int is_palindrome(char str[])
{
    int i, j, len = strlen(str);
    i= 0;
    j= len - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}


int main()
{
    char str[100];
    scanf("%s", str);
    int result = is_palindrome(str);
    if (result)
    {


        printf("Palindrome");
    }
    else
    {


        printf("Not Palindrome");
    }


    return 0;
}
