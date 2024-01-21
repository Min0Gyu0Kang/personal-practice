#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//from a 1 to N circular sequence, return all kth person

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to initialize an empty queue
Queue* initializeQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

// Function to enqueue a node into the queue
void enqueue(Queue* queue, int data) {
    Node* newNode = createNode(data);
    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
        return;
    }
    queue->rear->next = newNode;
    queue->rear = newNode;
}

// Function to dequeue a node from the queue
int dequeue(Queue* queue) {
    if (queue->front == NULL) {
        return -1; // Queue is empty
    }
    int data = queue->front->data;
    Node* temp = queue->front;
    queue->front = queue->front->next;
    free(temp);
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    return data;
}

// Function to solve the Josephus problem using a queue
void josephus(int n, int k) {
    Queue* queue = initializeQueue();

    // Enqueue all people into the queue
    for (int i = 1; i <= n; i++) {
        enqueue(queue, i);
    }

    printf("<");
    while (queue->front != NULL) {
        // Perform k-1 dequeue operations
        for (int i = 0; i < k - 1; i++) {
            int frontData = dequeue(queue);
            enqueue(queue, frontData);
        }

        // Dequeue the kth person and print it
        int josephusPerson = dequeue(queue);
        printf("%d", josephusPerson);

        // Print a comma if there are more elements in the queue
        if (queue->front != NULL) {
            printf(", ");
        }
    }
    printf(">\n");

    // Free the allocated memory for the queue
    free(queue);
}

int main(){
    int N,K;
    scanf("%d %d",&N,&K);
    josephus(N,K);
    return 0;
}