#include "Node.h"

void pairSwitch(Node *head){
      Node *prev = head;
      Node *current = prev->next;
      Node *Next = current->next;
      while (current != nullptr)
      {
            current->next = prev;
            prev->next = Next;
            prev = Next;
            current = prev->next;
            Next = current->next;
      }
}
