//#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcat(char* dest, char* src, unsigned int size)
{
    unsigned int dest_len = 0;
    unsigned int src_len = 0;
    unsigned int i;

    // حساب طول dest
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    // حساب طول src
    while (src[src_len] != '\0')
    {
        src_len++;
    }

    // إذا كان الحجم المحدد أقل من طول dest، نعيد الحجم زائد طول src
    if (size <= dest_len)
    {
        return (size + src_len);
    }

    // دمج src في dest
    i = 0;
    while (src[i] != '\0' && (dest_len + i) < (size - 1))
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    // إضافة النهاية null-terminator
    dest[dest_len + i] = '\0';

    // إعادة الطول الكلي الذي حاولنا إنشاؤه
    return (dest_len + src_len);
}


int main()
{
	char dest[20] = "Hello";
	char src[] = " World";
	unsigned int size = 20;

	// استدعاء الدالة ft_strlcat
	unsigned int result = ft_strlcat(dest, src, size);

	// طباعة السلسلة النهائية
	printf("Final string: %s\n", dest);
	printf("Total length tried to create: %u\n", result);


    return 0;
}