#include <stdio.h>
#include <stdlib.h>

int main() {
 	int num, i, *ptr;

	printf("Introduce el valor de la variable num");
	scanf("%d", &num);

	ptr= (int *) malloc ( num * sizeof(int)); //memoria reservada usando malloc

	if(ptr==NULL)
	{
 	     printf("Error memoria no reservada.");
	     exit(0);
	}

	printf("Introduce la secuencia de numeros: ");
	for(i=0;i<num;++i)
	{
	     scanf("%d", ptr + i);
	}

	printf("\n Los numeros ingresados y almacenados en la memoria reservada son: \n");
	for(i=0;i<num;++i)
	{
	     printf("%p \t: %d\n",(ptr +i), *(ptr +i));
	}

	free(ptr);
	return 0;
}


