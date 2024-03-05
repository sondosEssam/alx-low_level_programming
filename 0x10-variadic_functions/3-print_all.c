#include"variadic_functions.h"
/**
 * print_all - function
 * @format: arg
 * @...: arg3
 * Return: ivoid
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, num = 0;
	char *string = NULL;
	double floati;
	int flag = 0;
	const unsigned int n = strlen(format);

	va_start(args, format);
	while (format[i] != '\0')
	{
		flag = 0;
		switch(format[i])
		{
			case ('c'):
			{
				num = va_arg(args, int);
				printf("%c", num);
				break;
			}
			case ('i'):
			{
				num = va_arg(args, int);
				printf("%d", num);
				break;
			}
			case ('f'):
			{
				floati = va_arg(args, double);
				printf("%f", floati);
				break;
			}
			case ('s'):
			{
				string = va_arg(args, char*);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
			}
			default:
			{
			flag = 1;
			break;
			}
		} 
		if( i != ((int)n - 1) && flag != 1)
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
