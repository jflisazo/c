#include <stdio.h>

int main()
{
	int a = 0;
	int b = 1;

	while (b < 2000000){
		printf("%d\n", b);
		a = b;
		b = a+b;
	}
	return 0;
}

