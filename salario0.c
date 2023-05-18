#include<stdio.h>

int main() {
	float salario;
	float n1;
	float n2;
	printf("ingresa el salario\n");
	scanf("%f",&n1);
	printf("Cual es tu descuento\n");
	scanf("%f",&n2);
	salario =n1/n2;
	printf("El salario es: %f\n",salario);
	return 0;
}

