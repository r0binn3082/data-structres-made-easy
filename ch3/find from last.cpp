#include <iostream>
using namespace std;

struct Node
{
      int data;
      Node *next;

      Node(int x){
            data = x;
            next = nullptr;
      }
};

Node* findFromLastIndex(int index, Node* head){
      Node *current = head;
      Node *theOne = head;
      for (int i = 0; i < index;i++){
            current = current->next;
      }
      while (current != nullptr)
      {
            current = current->next;
            theOne = theOne->next;
      }
      return theOne;
}
