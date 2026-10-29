#include "Utils.h"
#include "Stack.h"
#include <stdio.h>

void reverse(int* nums, unsigned int size)
{
    Stack s;
    initStack(&s);

    for (unsigned int i = 0; i < size; i++)
    {
        push(&s, nums[i]);
    }

    for (unsigned int i = 0; i < size; i++)
    {
        nums[i] = pop(&s);
    }

    cleanStack(&s);
}

int* reverse10()
{
    const int SIZE = 10;
    Stack s;
    initStack(&s);

    printf("Please enter 10 integers:\n");
    for (int i = 0; i < SIZE; i++)
    {
        unsigned int num;
        scanf("%u", &num);
        push(&s, num);
    }

    int* reversedNums = new int[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        reversedNums[i] = pop(&s);
    }

    cleanStack(&s);

    return reversedNums;
}