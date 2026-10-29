#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
    q->maxSize = size;
    q->elements = new int[size];
    q->tail = 0;              
}

bool isEmpty(Queue* s)
{
    return(s->tail == 0);
}

bool isFull(Queue* s)
{
    return(s->tail == s->maxSize);
}

void enqueue(Queue* q, unsigned int newValue)
{
    if (!isFull(q))
    {   
        q->elements[q->tail] = newValue;
        q->tail += 1;
    }
}

int dequeue(Queue* q)
{
    if (isEmpty(q))
    {
        return -1;
    }

    int val = q->elements[0];

    for (int i = 0; i < q->tail - 1; i++)
    {
        q->elements[i] = q->elements[i + 1];
    }

    q->tail -= 1;
    return val;
}

void cleanQueue(Queue* q)
{
    delete[] q->elements;
    q->elements = NULL;
    q->maxSize = 0;
    q->tail = 0;
}