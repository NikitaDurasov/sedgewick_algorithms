#include <stdio.h>
#include <stdlib.h>

const int ascii_len = 95;

int main()
{
    int i, char_dict[ascii_len] = {0};
    char t;

    while ((t = getchar()) != '\n')
    {
        i = t;
        i -= 32;
        char_dict[i] += 1;
    }

    for (i = 0; i < ascii_len; i++)
        if (char_dict[i])
            printf("%c - %d\n", i+32, char_dict[i]);

    return 0;
}

