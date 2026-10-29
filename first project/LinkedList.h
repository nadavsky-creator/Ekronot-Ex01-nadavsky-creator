#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node {
    int value;
    struct Node* next;
} Node;

void listFree(Node** head);
void addToList(Node** head, int val);
int removeFromList(Node** head, int val);

#endif /* LINKEDLIST_H */