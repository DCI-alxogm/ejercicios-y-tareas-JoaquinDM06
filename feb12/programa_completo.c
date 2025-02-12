/*
Febrero 12, 2025
Joaquin Dominguez Mejia
Este es el primer programa, mostrando estructura, definicion de variables, imprimir y leer valores de variables en la pantalla
*/


#include <stdlib.h> //libreria estandar de c.
#include <stdio.h> //libreria para interactuar

int main( ){
	char nombre[10];
	int edad;
	float temperatura;
	//Cuerpo del programa;
	printf ("¿Cuál es tu nombre? \n");
	scanf("%s", nombre);
	printf("Hola, %s este es el primer programa completo\n",nombre);
	
	printf ("Dime cuantos años tienes \n");
	scanf("%i", &edad);
	printf ("¿Cuál era la temperatura hoy por la mañana? \n");
	scanf("%f", &temperatura);
	
	printf("Tu edad es: %i\n", edad);
	printf("La temperatura hoy en la mañana fué: %f\n", temperatura);
	exit(0);
}
