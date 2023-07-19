#include "Node.h"

void insertSort(Node* head, Node* insrted){
      Node *current = head->next;
      Node *prev = head;
      while (current!= nullptr)
      {
            if (insrted->data < current->data)
            {
                  insrted->next = current;
                  prev->next = insrted;
                  break;
            }
            else if (insrted->data == current->data)
            {
                  break;
            }
            prev = prev->next;
            current = current->next;
      }

      if(current == nullptr){
            prev->next = insrted;
            insrted->next = nullptr;
      }
}