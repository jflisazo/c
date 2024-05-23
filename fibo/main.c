#include <stdio.h>

int main()
{
	int a, b;
	a = 0;
	b = 1;
	
	while(b < 200000){
		printf("%d\n", b);
		a = b;
		b = a+b;
	}
	return 0;
}
