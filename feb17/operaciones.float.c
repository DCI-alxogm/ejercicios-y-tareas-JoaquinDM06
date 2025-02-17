/* Operaciones con numeros reales */

#include <stdio.h> //libreria de entrada

int main(){
	float a,b,c,d;
	float e1,e2,e3,e4;
	a=13.1416;
	b=-8.09;
	c=0.45;
	d=-2.06;
	e1=(a+b)*c/d;
	e2=((a+b)*c)/d;
	e3=(a+b)*(c/d);
	e4=a+b*c/d;
		printf("e=(a+b)*c/d=%f\n",e1);
		printf("e=((a+b)*c)/d=%f\n",e2);
		printf("e=(a+b)*(c/d)=%f\n",e3);
		printf("e=a+b*c/d=%f\n",e4);
}
