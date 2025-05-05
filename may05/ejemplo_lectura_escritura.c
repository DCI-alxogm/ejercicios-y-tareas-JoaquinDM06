#include <stdio.h>

int main(){

        FILE *archivo; // archivo de lectura
	FILE *fp; // archivo de escritura
        float var1, var2;
        char cadena1[255], cadena2[255];

        var1=0.15;
        var2=100.8;

        archivo = fopen("test2.txt", "r");
        fgets(cadena1,255,archivo);
        fgets(cadena2,255,archivo);
        fscanf(archivo,"%f %f", &var1,&var2);
        fclose(archivo);

	fp = fopen("test2_salida.txt","w");
	fputs(cadena1, fp);
	fprintf(fp, "%f \t %f \n", var1, var2);
	fprintf(fp, "%s",cadena2);
	fclose(fp);
        return(0);
}
