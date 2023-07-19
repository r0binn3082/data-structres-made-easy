class Node{
      public :
            int data;
            Node *next;
            Node *prev;

            Node (int n){
                  data = n;
                  next = nullptr;
                  prev= nullptr;
            }
};
void insrtingNodeHead(Node* head, Node* insrted){
      head->prev = insrted;
      insrted->next = head;
}
void insrtingNodeEnd(Node* head, Node *insrted){
      while (head->next != nullptr)
      {
            head = head->next;
      }
      head->next = insrted;
      insrted->next = nullptr;
      insrted->prev = head;
}
void insertNodeAtIndex(Node* head, Node*inserted, int index){
      for (int i = 1; i < index; i++){
            head = head->next;
      }
      inserted->prev = head;
      inserted->next = head->next;
      head->next = inserted;
      inserted->next->prev = inserted;
}
void deleteLastNode(Node* head){
      Node *prev = head;
      Node *current = head->next;
      while (current->next != nullptr)
      {
            prev = prev->next;
            current = current->next;
      }
      prev->next = nullptr;
      current->prev = nullptr;
}
void deleteAtIndex(Node *head, int index){
      for (int i = 1; i < index; i++){
            head = head->next; 
      }
      Node *deleted = head->next;
      head->next = deleted->next;
      deleted->next->prev = head;
}
