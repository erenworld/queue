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
