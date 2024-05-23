#include<stdio.h>

int main()
{
	int a, b, max = 0;
	
	printf("Give me two integers: ");
	scanf("%d %d", &a, &b);

	max = (a > b) ? a : b;
	printf("%d\n", max);

	return 0;
}
	
