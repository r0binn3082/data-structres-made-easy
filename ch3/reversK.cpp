#include "Node.h"

void revK(int k, Node *head){
      Node *current = head;
      Node *start = head;
      for (int i = 0; i != k && current != nullptr; i++){
            current = current->next;
      }
      Node *newStart = current->next;
            while (current != start && current != nullptr )
      {
            Node *tempPrev= start;
            Node *tempNext = current->next;
            current->next = tempPrev;
            tempPrev = current;
            current = tempNext;
      }
      if (current != nullptr) revK(k, newStart);
}