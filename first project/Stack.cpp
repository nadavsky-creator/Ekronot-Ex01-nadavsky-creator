#include "Stack.h"
#include <stdio.h>

void initStack(Stack* s)
{
    if (s != NULL)
    {
        s->head = NULL;
    }
}

void cleanStack(Stack* s)
{
    if (s == NULL) return;
    listFree(&(s->head));
}

void push(Stack* s, unsigned int element)
{
    if (s == NULL) return;
    addToList(&(s->head), (int)element);
}

int pop(Stack* s)
{
    if (s == NULL || s->head == NULL)
    {
        return -1;
    }

    Node* temp = s->head;
    int value = temp->value;

    s->head = s->head->next;
    delete temp;

    return value;
}

bool isEmpty(Stack* s)
{
    if (s == NULL) return true;
    return s->head == NULL;
}

bool isFull(Stack* s)
{
    return false;
}