#include <iostream>
using namespace std;
#include <vector>

struct node{
    int data;
    node* link;
};

node* insert (int d, node* h) {
    node *n = new node;
    n -> data = d;
    n -> link = NULL;
    
    if (h == NULL) {
        h = n;
    }
    else{
        node* temp = h;
        while (temp -> link != NULL) {
            temp = temp -> link;
        }
        temp -> link = n;
    }
    cout << "The node has been inserted.\n";
    return h;
}

void display (node* h) {
    node* temp = h;
    cout << "The linked list is: ";
    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> link;
    }
    cout << "\n\n";
}

int main() {
    
  node *head = NULL;
  
  head = insert(1, head); head = insert(5, head);
  head = insert(3, head); head = insert(4, head);
  head = insert(6, head); head = insert(0, head);
  head = insert(7, head); head = insert(8, head);
  display(head);

  return 0;
}