#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head, int newData)
    {
      struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
      newNode->data = newData;
      newNode->next = *head;
      *head = newNode;
    }
    
void printList(struct Node* node)
    {
    while(node!=NULL)
        {
          printf("%d",node->data);
          node = node->next;
        }
        printf("\n");
    }
void deleteNode(struct Node** head, int key)
    {
      struct Node* temp = *head;
      struct Node* prev = NULL;
           
      if (temp!= NULL && temp->data==key)
      {      
        *head = temp->next;
        free(temp);
        return;
      }
      while (temp!=NULL && temp->data!=key)
      {
        prev = temp;
        temp = temp->next;
      }
      if (temp == NULL)
      {
        printf("Key not found in the linked list.\n");
        return;
      }
      prev->next = temp->next;
      free(temp);
    }
void freeList(struct Node** head)
    {
      struct Node* current = *head;
      struct Node* nextNode;
      while(current!=NULL)
      {
        nextNode = current->next;
        free(current);
        current = nextNode;
      }
      *head = NULL;
    }
int main()
    {
    struct Node* head = NULL;
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 7);
    insertAtBeginning(&head, 9);
    
    printf("Linked List:");
    printList(head);
    
    deleteNode(&head, 7);
    printf("Linked list after deletion:");
    printList(head);
    freeList(&head);
    return 0;
    }
       
                    
