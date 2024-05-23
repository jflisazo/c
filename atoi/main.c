#include<stdio.h>

int atoi(char s[]);

int main()
{
	char s[100000];
	int i = 0;
	printf("Give me a number: ");
	scanf("%s", s);
	i = atoi(s);
	printf("%d\n", i);
}

int atoi (char s[])
{
	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}
