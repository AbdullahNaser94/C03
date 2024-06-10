//#include <unistd.h>
#include <stdio.h>

/*
SYNOPSIS
     #include <string.h>

     char *
     strcat(char *restrict s1, const char *restrict s2);

DESCRIPTION
     The strcat() and strncat() functions append a copy of the null-terminated
     string s2 to the end of the null-terminated string s1, then add a termi-
     nating '\0'.  The string s1 must have sufficient space to hold the
     result.

RETURN VALUES
     The strcat() and strncat() functions return the pointer s1.

*/

char* ft_strcat(char* dest, char* src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main() 
{
    char dest[50] = "Hello, ";
    char src[] = "world!";

    ft_strcat(dest, src);
    printf("Concatenated string: %s\n", dest);
    return 0;
}