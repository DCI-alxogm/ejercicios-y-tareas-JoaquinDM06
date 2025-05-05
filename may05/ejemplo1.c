#include <stdio.h>

int main(){

	FILE *archivo;
	float var1, var2;

	var1=0.15;
	var2=100.8;

	archivo = fopen("test.txt", "w");
	fputs("Esta es una prueba de fputs...\n", archivo);
	fprintf(archivo, "Esta es otra prueba usando fprintf...\n");
	fprintf(archivo, "%f \t %f \n",var1,var2);
	fprintf(archivo, "%f \t %f \n",var1*2,var2*2);
	fclose(archivo);
	return(0);
}
