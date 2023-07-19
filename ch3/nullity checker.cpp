# include "Node.h"

bool isNull(Node* head){
      Node *current = head;
      Node *slowptr= head;
      while (current != nullptr)
      {
            current = current->next->next;
            slowptr = slowptr->next;
            if (current == slowptr) return false;
      }
      return true;
}