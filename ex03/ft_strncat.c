//#include <unistd.h>
#include <stdio.h>

/*
%> mkdir ex03
%> cd ex03

%> man strncat

SYNOPSIS
     #include <string.h>

     char *
     strncat(char *restrict s1, const char *restrict s2, size_t n);

DESCRIPTION
     The strcat() and strncat() functions append a copy of the null-terminated
     string s2 to the end of the null-terminated string s1, then add a termi-
     nating '\0'.  The string s1 must have sufficient space to hold the
     result.

     The strncat() function appends not more than n characters from s2, and
     then adds a terminating '\0'.

RETURN VALUES
     The strcat() and strncat() functions return the pointer s1.
     
%> vim ft_strncat.c
*/

char* ft_strncat(char* dest, char* src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while (src[j] != '\0' && j < nb)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';

    return dest;
}

int main()
{
    char dest[50] = "Hello, ";
    char src[] = "world!";
    unsigned int nb = 3;

    printf("Before: %s\n", dest);
    ft_strncat(dest, src, nb);
    printf("After: %s\n", dest);

    return 0;
}