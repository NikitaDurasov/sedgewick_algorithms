#include <stdio.h>

int strlen(char* a)
{
    int i;
    for (i = 0; a[i] != NULL; i++) 
    return i;
}

void strcpy(char* a, char* b)
{
    int i;
    for (i = 0; (a[i] = b[i]) != NULL; i++);
}

int strcmp(char* a, char* b)
{
    int i;
    for (i = 0; a[i] == b[i]; i++)
        if (a[i] == NULL) return 0;
    return a[i] - b[i]
}

void strcat(char* a, char* b)
{
    strcpy(a+strlen(a), b);
}

