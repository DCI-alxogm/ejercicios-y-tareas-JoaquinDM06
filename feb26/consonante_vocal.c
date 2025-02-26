/*Vocales o consonantes*/

#include <stdio.h>

int main()
{

	char c;
	int vocalminuscula, vocalmayuscula;
	printf("Introduce una letra:");
	scanf("%c", &c);
vocalminuscula = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
vocalmayuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	if (vocalmayuscula || vocalminuscula){
		printf("%c es una vocal\n", c);
	}else{
		printf("%c es una consonante\n", c);
	}
return(0)

}
