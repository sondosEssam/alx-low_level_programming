/**
* reverse_array -Function that concancate two strings
* @a: second string
* @n: first string
* Return: integer represting if the two strings are equal or not
*/
#include"main.h"
void reverse_array(int *a, int n)
{
	int tmp = 0;
	int l = 0;
	int i = 0;

	while (l < n / 2)
	{
		tmp = a[l];
		a[l] = a[n - i - 1];
		a[n - i - 1] = tmp;
		l++;
		i++;
	}


}
