#include <stdlib.h>
#include <stdio.h>
#include <string.h>

const int N = 10000;

int main()
{
    int i, j;
    char t, string[N];

    for (i = 0; i < N-1; string[i] = t, i++)
        if ((t = getchar()) == '\n') break;

    string[i] = 0;

    for (i = 0, j = strlen(string) - 1;; i++, j--)
    {
        if (i >= j)
            break;

        while (string[i] == ' ')
            i++;

        while (string[j] == ' ')
            j--;

        if (string[i] != string[j])
            break;
    }

    if (j <= i)
        printf("palindrome");
    else 
        printf("not palindrome");

    return 0;
}




