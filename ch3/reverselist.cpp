class Node{
      public :
            int data;
            Node *next;

            Node (int n){
                  data = n;
                  next = nullptr;
            }
};
void reverse(Node* head){
      Node *current = head->next;
      Node *tempPrev = head;
      head->next = nullptr;
      while (current != nullptr)
      {
            Node *tempNext = current->next;
            current->next = tempPrev;
            tempPrev = current;
            current = tempNext;
      }
}
