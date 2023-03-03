#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node__{
  int num;
  struct Node__ *next;
}Node;

void insertNode(int num, Node **head){
  Node *newNode;
  newNode = (Node*) malloc(sizeof(Node));
  newNode->num = num;
  newNode->next = NULL;

  if(*head == NULL || (*head)->num > num){
    newNode->next = *head;
    *head = newNode;
  }else{
    Node *curr;
    curr = *head;
    
    while(curr->next != NULL && curr->next->num < num){
    curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
  }
  
}

void deleteNode(int num, Node **head){
  if(head == NULL){
    return;
  }
  Node *curr;
  Node *temp;
  while ( (*head) && (*head)->num == num)
    *head = (*head)->next;
  
  curr = *head;
   Node *prev = NULL;
    while (curr != NULL) {
        if (curr->num == num)
            prev->next = curr->next;
        else
            prev = curr;
        curr = curr->next;
    }
}

void printNode(Node **head){
  Node *curr;
  printf("[ ");
  for(curr = *head; curr != NULL; curr = curr->next){
    printf("%d ", curr->num);
  }
  printf("]\n");
}

int main(){
  Node *data;
  data = NULL;
  char command = ' ';
  int num = 0;
  
  while(command != 'q'){
    printf("input> ");
    scanf(" %c", &command);
    
    if(command == 'i'){
      scanf("%d", &num);
      insertNode(num, &data);
    }

    if(command == 'd'){
      scanf("%d", &num);
      deleteNode(num, &data);
    }

    if(command == 'p'){
      printNode(&data);
    }
  }
}