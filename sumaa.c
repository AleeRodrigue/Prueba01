
#include<stdio.h>
#define SIN_TIPO float
int main() {
	SIN_TIPO n1;
	SIN_TIPO n2;
	float suma;
	printf("ingrese el primer numero\n");
	scanf("%s",n1);
	printf("ingrese el segundo numero\n");
	scanf("%s",n2);
	suma = n1+n2;
	printf("la suma es igual a: %f\n",suma);
	return 0;
}

