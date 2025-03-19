#include <stdio.h>
#include <math.h>

int main (){
	int opcion;
	float base, altura, area;

	printf("Seleccione una opcion: \n");
	printf("1. Calcular el area de un rectangulo\n");
	printf("2. Convertir grados Ceñsius a Farhrenheit\n");
	printf("3. Verificar si un numero es multiplo de otro\n");
	printf("4. Sumar los digitos de un numero de dos cifras\n");
	scanf(" %d", &opcion);
	
	switch (opcion)  {
		case 1:
			printf("Ingrese la base y la altura del rectangulo:");
			scanf(" %f %f ", &base, &altura);
			area= base * altura;
			printf("El area del rectangulo es: %f\n", area);
			break;
		
		case 2: 
		int TC;
		float TF;
			printf("Ingrese la temperatura en grados celsius:");
			scanf(" %d", &TC);
			TF = (TC * 9/5) + 32;
			printf("La temperatura en Farhenheit es: %.2f\n", TF);
			break;
		
		case 3: 
		int numero, digito;
			printf("Ingrese dos numeros:");
			scanf(" %d %d", &numero, &digito);
			if (numero % digito == 0) {
				printf("%d es multiplo de %d. \n", numero, digito);
			}else{
				printf("%d no es multiplo de %d.\n", numero, digito);
			}
			break;
		case 4: 
		int suma;
			printf("Ingrese un numero de dos cifras:");
			scanf(" %d", &numero);
			if (numero >=10 && numero <=99) {
				suma = (numero / 10) + (numero % 10);
				printf("La suma de los digitos es: %d\n", suma);
			}else if (numero < 10) {
				printf("El numero es de una sola cifra, no se puede realizar la operacion");
			}
			break;
		default:
			printf("Opcion no valida\n");
			break;
	}
	return 0;
}			
				
				
				
				
				 
