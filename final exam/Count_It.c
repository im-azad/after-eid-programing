#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1001];
    gets(s);
    int cp = 0, sm = 0, sp = 0;
    int i = 0;

    while (s[i] != '\0')
    {

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cp++;
        }

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            sm++;
        }

        if (s[i] == ' ')
        {
            sp++;
        }

        i++;
    }

    printf("Capital - %d\n", cp);
    printf("Small - %d\n", sm);
    printf("Spaces - %d\n", sp);
    return 0;
}
