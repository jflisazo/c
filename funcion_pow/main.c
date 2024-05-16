#include <stdio.h>

int funcion_pow(int a, int b);

int main()
{
	for (int a = 0; a < 10; ++a)
		printf("%d %d %d\n", a, funcion_pow(2, a), funcion_pow(-3, a));

	return 0;
}

int funcion_pow(int base, int n)
{
	int p = 1;

	for (int i = 1; i <= n; i++)
		p = p * base;
	return p;
}

