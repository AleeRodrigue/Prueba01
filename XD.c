#include <stdio.h>
int main(void){
 int cantidad, num;
 int mayor = 0;
 int menor = 0;
 int suma = 0;
 
 printf("Cuantos numeros: ");
 scanf("%i", &cantidad);
 
 for (int i = 1; i <= cantidad; i++)
 {
  printf("\nIngrese el numero: ");
  scanf("%i", &num);
  
  if(1 == i){ 
    mayor = num;
    menor = num;
  }
  else if (num > mayor){ 
    mayor = num; cantidad
  }
  else if (num < menor){
    menor = num; 
  }
  suma += num;
 }
 
 printf("\nEl numero mayor es: %i", mayor);
 printf("\nEl numero menor es: %i", menor);
 return 0;
}