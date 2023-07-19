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

class Stack{
private:
      Node *head;

public:
      Stack(){
            head = nullptr;
      }
      bool isEmpty(){
            return head == nullptr;
      }
      void push(int x){
            Node *newNode = new Node(x);
            if (newNode == nullptr) {
                  cout << "Failed to allocate memory for new node. Push operation failed." << endl;
                  return;
            }
            newNode->next = head;
            head = newNode;
      }
      int pop(){
            if(isEmpty())  return -1;
            int temp = head->data;
            head = head->next;
            return temp;
      }
};
int main() {
      Stack s;
      s.push(1);
      s.push(2);
      s.push(3);

      while (!s.isEmpty()) {
            cout << s.pop() << endl;
      }

      return 0;
}
