#include "LinkedList.h"
#include <stdio.h>

void addToList(Node** head, int val) {
    Node* newNode = new Node();
    newNode->value = val;
    newNode->next = *head;
    *head = newNode;
}

int removeFromList(Node** head, int val) {
    if (head == NULL || *head == NULL) {
        return -1;
    }

    Node* current = *head;
    Node* prev = NULL;

    while (current != NULL) {
        if (current->value == val) {
            if (prev == NULL) {
                *head = current->next;
            }
            else {
                prev->next = current->next;
            }
            delete current;
            return val;
        }
        prev = current;
        current = current->next;
    }

    return -1;
}

void listFree(Node** head) {
    while (head != NULL && *head != NULL) {
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
    }
}