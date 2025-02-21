/* 
Febrero 17, 2025
Joaquin Dominguez
Primera tarea en donde se tienen que ejecutar operaciones pero nosotros tenemos que ingresar los numeros desde la terminal.
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	float a,b,c,d;
	float e1,e2,e3,e4;
	//Pedir numeros
	printf("¿Qué números quieres para las operaciones?\n");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	//Hacer las operaciones
	e1=(a+b)*c/d;
	e2=((a+b)*c)/d;
	e3=(a+b)*(c/d);
	e4=a+b*c/d;
	//Mostrar los resultados
	printf("%f\n",e1);
	printf("%f\n",e2);
	printf("%f\n",e3);
	printf("%f\n",e4);
}
