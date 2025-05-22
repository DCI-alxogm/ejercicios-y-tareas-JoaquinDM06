#include <stdio.h>

int main() {

	int var=20;
	int *ptr=NULL;

     if(ptr){

	printf("La direccion de la variable var es %p \n", &var);
	printf("Direccion guardada en el apuntador ptr: %p\n", ptr);
	printf("El valor escrito en la direccion %p es: %d\n", ptr, *ptr);
     }else{
	printf("No se asignado direccion al apuntador\n");
     }

     ptr = &var;
     printf("Despues de haver ptr=&var\n");

     if(ptr){
	printf("\t La direccion de la variable var es: %p\n", &var);
	printf("\t Direccion guardada en el apuntador ptr: %p\n",ptr);
	printf("\t El valor escrito en la direccion %p es: %d\n", ptr, *ptr);
     }else{
	printf("\t No se ha asignado direccion al apuntador\n");
     }

return(0);
}










