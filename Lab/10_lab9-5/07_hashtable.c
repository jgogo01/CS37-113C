#include <stdio.h>
#include <stdlib.h>

#define SIZE  97

typedef struct nodeType {
  int   item;
  struct nodeType* next;
} Node;


void printHashTable(Node** table, int size) {
    for (int i = 0; i < size; i++) {
        printf("KEY %2d: ", i);
        Node* current = table[i];
        while (current != NULL) {
            printf("%d ", current->item);
            current = current->next;
        }
        printf("\n");
    }
}

void insertInHashTable(Node** table, int value) {
    int index = value % SIZE;
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->item = value;
    temp->next = table[index];
    table[index] = temp;
}

int main() {
    Node* hashTable[SIZE] = { NULL };
    char input = '\0';
    int value, count = 0;

    while (input != 'q') {
        printf("input> ");
        scanf(" %c", &input);
        if (input == 'a') {
            scanf("%d", &value);
            insertInHashTable(hashTable, value);
            count++;
        } else if (input == 'p') {
            printHashTable(hashTable, SIZE);
        }
    }

    return 0;
}