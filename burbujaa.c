#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (; --n;)
        for (int i = 0; i < n; i++)
            if (arr[i] > arr[i + 1])
                arr[i] ^= arr[i + 1] ^= arr[i] ^= arr[i + 1];
}

int main() {
    int arr[] = {87, 77, 15, 82, 32, 19, 98};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    printf("Arreglo ordenado: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}