#include "Node.h"
/*
* determine the smallest node to begin from
* compare each two node to see what puts next
*skip reption
* traverse until one of lists becomes empty
*/
Node* mergelist(Node *head1, Node *head2){
      
      Node *current;         // ?head of the new list
      // ?two pointers for each list
      Node *current1 = head1;
      Node *current2 = head2;
      Node *currentHead; // ? the returned head
      // TODO see where you start new merged linked list
      if (head1->data < head2->data)
      {
            currentHead = head1;
            current = head1;
            current1 = current1->next;
      }
      else
      {
            currentHead = head2;
            current = head2;
            current2 = current2->next;
      }
      
      // todo: fill the new list
      while (current1 != nullptr && current2 != nullptr)
      {
            // todo check who is the next node
            if (current1->data < current2 ->data)
            {
                  current->next = current1;     // ? assign the next node to be the small one
                  current1 = current1->next;     // ? update  current pointer in ll1
                  current = current->next;      // ?  update  current in new ll
            }
            // TODO: skip if they are equal 
            else if(current1->data == current2 ->data)
            {
                  current1 = current1->next;
                  current2 = current2->next;
            }
            else
            { 
                  current->next = current2;     // ? assign the next node to be the small one
                  current2 = current2->next;     // ? update  current pointer in ll1
                  current = current->next;      // ?  update  current in new ll
            }
      }
      if(current1 == nullptr) current->next = current2; 
      if(current2 == nullptr) current->next = current1;
      return currentHead;
}
