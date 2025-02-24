/*
Convercion de cordenadas cilindricas y esfericas a partir de X,Y,Z.
Correcion del programa
24-feb-2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float x, y, z; //variables iniciales
	float re, theta, phi, rc; //variables que tenemos que calcular

	//Cuerpo del programa

	printf("Programa para conversion de coordenadas cartesianas (x,y,z)\n");
	printf("a coordenadas esfericas (r,theta,phi) y cilindricas (r,theta,z)\n");
	//Pedir las coordenadas al usuario y leerlas
	printf("ingrese las coordenadas para x,y,z: \n");
	scanf("%f %f %f", &x, &y, &z);


	//Conversion a coordenadas esfericas

	re = sqrt(x*x + y*y + z*z); // radio esferico
	theta = atan(y/x); // theta (angulo en el plano xy)
	phi = acos(z / re); // angulo respecto a z


	//Conversion a coordenadas cilindricas

	rc = sqrt(x*x +y*y); // radio cilindrico
	// z se mantiene igual
	// theta ya se calculo


	printf("Resultados \n");

	//Resultados esfericos

	printf("Coordenadas esfericas:\n");
	printf("%f,%f,%f\n", re, theta, phi);

	//Resultados cilindricos

	printf("Coordenadas cilindricas:\n");
	printf("%f,%f,%f\n", rc, theta, z);

exit(0);

}
