#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{	
	int acertijo;
	srand(time(NULL));
	acertijo=rand() % 101;

	int numero = -1;

	while (numero != acertijo){
		printf("Dame un numero entre 0 y 100: ");
		scanf("%d", &numero);

		if (numero < acertijo)
			printf("Muy bajo!\n");
		else if (numero > acertijo)
			printf("Muy alto!\n");
		else
			printf("Acertaste, eres un genio!!!\n");
	}
	return 0;
}
