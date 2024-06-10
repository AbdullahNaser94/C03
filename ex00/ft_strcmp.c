// #include <unistd.h>
#include <stdio.h>

/*
NOPSIS
     #include <string.h>

     int
     strcmp(const char *s1, const char *s2);

DESCRIPTION
     The strcmp() and strncmp() functions lexicographically compare the null-
     terminated strings s1 and s2.

     The strncmp() function compares not more than n characters.  Because
     strncmp() is designed for comparing strings rather than binary data,
     characters that appear after a '\0' character are not compared.

 RETURN VALUES
     The strcmp() and strncmp() return an integer greater than, equal to, or
     less than 0, according as the string s1 is greater than, equal to, or
     less than the string s2.  The comparison is done using unsigned charac-
     ters, so that '\200' is greater than '\0'.
*/

int ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }

    if (s1[i] == s2[i])
    {
        return (0);
    }
    else
    {
        return (s1[i] - s2[i]);
    }
}

int main()
{

    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hellp";
    char str4[] = "HelLo";

    printf("Comparing '%s' and '%s': %d\n", str1, str2, ft_strcmp(str1, str2)); // يجب أن تعيد 0
    printf("Comparing '%s' and '%s': %d\n", str1, str3, ft_strcmp(str1, str3)); // يجب أن تعيد قيمة سالبة
    printf("Comparing '%s' and '%s': %d\n", str1, str4, ft_strcmp(str1, str4)); // يجب أن تعيد قيمة موجبة

    return 0;
}
