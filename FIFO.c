#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;

void enqueue(Queue *queue, int item) {
    if (queue->rear == MAX_SIZE - 1) {
        printf("La cola est� llena.\n");
        return;
    }
    queue->data[++queue->rear] = item;
}

int dequeue(Queue *queue) {
    if (queue->front > queue->rear) {
        printf("La cola est� vac�a.\n");
        return -1;
    }
    return queue->data[queue->front++];
}

int main() {
    Queue queue;
    queue.front = 0;
    queue.rear = -1;

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("Elemento eliminado: %d\n", dequeue(&queue));
    printf("Elemento eliminado: %d\n", dequeue(&queue));
    printf("Elemento eliminado: %d\n", dequeue(&queue));

    return 0;
}