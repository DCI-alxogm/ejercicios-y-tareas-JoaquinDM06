#include <stdio.h>

int main(){

        FILE *archivo;
        float var1, var2;
	char cadena1[255], cadena2[255];

        var1=0.15;
        var2=100.8;

        archivo = fopen("test.txt", "r");

	fgets(cadena1,255,archivo);
	fgets(cadena2,255,archivo);
        printf("%s",cadena1);
	printf("%s",cadena2);
	fscanf(archivo,"%f %f", &var1,&var2);
	printf("%f %f\n", var1, var2);
        fclose(archivo);
        return(0);
}
