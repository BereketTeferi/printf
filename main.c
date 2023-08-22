#include "main.h"

int main(void)
{
	int d = 01234, len = 0, len2 = 0;
	_printf("%d\n", d);
	printf("%d\n", d);
	_printf("%d\n%d\n", INT_MIN, INT_MAX);
       printf("%d\n%d\n", INT_MIN, INT_MAX);

       len = _printf("Number: %d, %i\n", 4034, 4034);
       len2 = printf("Number: %d, %i\n", 4034, 4034);
       printf("Len:[%d]\n", len);
       printf("Len1:[%d]\n\n", len2);
       len = _printf("Negative: %i, %d\n", -4034, -4034);
       len2 = printf("Negative: %i, %d\n", -4034, -4034);
       printf("Len:[%d]\n", len);
       printf("Len1:[%d]\n\n", len2);
       printf("Len:[%d]\n", len);
       printf("Len1:[%d]\n\n", len2);
       printf("Len:[%d]\n", len);
       printf("Len1:[%d]\n\n", len2);
       len = _printf("NULL: %i\n", NULL);
       len2 = printf("NULL: %i\n", NULL);
       printf("Len:[%d]\n", len);
       printf("Len1:[%d]\n\n", len2);
       len = _printf("%d\n", INT_MAX);
       len2 = printf("%d\n", INT_MAX);
       printf("Len:[%d]\n", len);
       printf("Len1:[%d]\n\n", len2);
       len = _printf("%d\n", INT_MIN);
       len2 = printf("%d\n", INT_MIN);
       
       printf("Len:[%d]\n", len);
       printf("Len1:[%d]\n\n", len2);

	return (0);
}
