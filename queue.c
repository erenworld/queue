/***
 * A queue (ADT) is a list or collection with the restriction that insertion can be performed at one end (rear)
 * and deletion can be performed at other end (front)
 * 
 * Insertion -> enqueue O(1) -> increment rear then add
 * Deletion -> dequeue O(1) -> increment front
 * Front -> return element at front O(1)
 * isEmpty -> check if it's empty O(1)
 ***/

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int *array;
    int front;
    int rear;
    int size;
} Queue;

Queue *createQueue(int size)
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));

    queue->array = (int *)malloc(sizeof(int) * size);
    queue->front = -1;
    queue->rear = -1;

    return queue;
}

bool isEmpty(Queue *queue)
{
    return (queue->front == -1 && queue->rear == -1);
}

/*
** A circular queue is full when adding one more element would make the rear pointer overlap with the front pointer
** This happens when the next position after rear matches front
*/
bool isFull(Queue *queue)
{
    return ((queue->rear + 1) % queue->size == queue->front);
}
