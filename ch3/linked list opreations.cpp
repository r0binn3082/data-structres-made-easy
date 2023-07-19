class Node{
      public :
            int data;
            Node *next;

            Node (int n){
                  data = n;
                  next = nullptr;
            }
};
int linkedLitLength(Node* head){
      int count = 0; 
      while (head != nullptr)
      {
            count++;
            head = head-> next;
      }
      return count;
}
void insertFront(Node* head, Node* inserted){
      inserted->next = head;
}
void insertFront(Node* head, Node* inserted){
      while (head-> next != nullptr)
      {
            head = head->next;
      }
      head->next = inserted;
      inserted->next = nullptr;
}
void insertSomeWhere(Node* head, int index, Node* inserted){
      for (int i = 1;i < index ; i++)
      {
            head = head->next;
      }
      Node *temp = head->next;
      head->next = inserted;
      inserted->next = temp;
}