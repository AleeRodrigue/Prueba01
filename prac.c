#include <stdio.h>

int main() {
    float salario, descuento;
    char respuesta;

    do {
        // Pedir al usuario que ingrese el salario
        printf("Ingrese su salario: ");
        scanf("%f", &salario);

        // Calcular el descuento del 10%
        descuento = salario * 0.1;

        // Mostrar el salario con el descuento aplicado
        printf("Su salario con el descuento del 10%% es: %.2f\n", salario - descuento);

        // Preguntar al usuario si desea continuar
        printf("Desea continuar? (s/n): ");
        scanf(" %c", &respuesta);
    } while (respuesta == 's' || respuesta == 'S');

    return 0;
}
