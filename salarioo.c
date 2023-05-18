#include <stdio.h>

int main() {
    float salario, descuento;
    char respuesta;

    do {
        printf("Ingrese su salario: ");
        scanf("%f", &salario);

        
        descuento = salario * 0.1;

        
        printf("Su salario con el descuento del 10%% es: %.2f\n", salario - descuento);

    
        printf("Desea continuar? (s/n): ");
        scanf(" %c", &respuesta);
    } while (respuesta == 's' || respuesta == 'S');

    return 0;
}
