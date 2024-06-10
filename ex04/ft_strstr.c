//#include <unistd.h>
#include <stdio.h>

/*
%> mkdir ex04
%> cd ex04

%> man strstr

SYNOPSIS
     #include <string.h>

     char *
     strstr(const char *s1, const char *s2);

DESCRIPTION
     The strstr() function locates the first occurrence of the null-terminated
     string s2 in the null-terminated string s1.

RETURN VALUES
     If s2 is an empty string, s1 is returned; if s2 occurs nowhere in s1,
     NULL is returned; otherwise a pointer to the first character of the first
     occurrence of s2 is returned.

%> vim ft_strstr.c
*/

char* ft_strstr(char* str, char* to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{
    char str[] = "Hello, world! This is a test.";
    char to_find[] = "world";

    char* result = ft_strstr(str, to_find);

    if (result != NULL) {
        printf("'%s' found at position: %ld\n", to_find, result - str);
    }
    else {
        printf("'%s' not found in '%s'\n", to_find, str);
    }

    return 0;
}