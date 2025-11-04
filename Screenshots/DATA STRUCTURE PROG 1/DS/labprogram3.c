#include <stdio.h>
#define N 3

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == N - 1) {
        printf("Queue is full\n");
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
        printf("Inserted element is %d\n", x);
    } else {
        rear++;
        queue[rear] = x;
        printf("Inserted element is %d\n", x);
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } else if (front == rear) {
        printf("Deleted element is %d\n", queue[front]);
        front = rear = -1;
    } else {
        printf("Deleted element is %d\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } else {
        printf("The queue is: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int ch, x;
    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the element to be inserted: ");
                scanf("%d", &x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}

