#include <iostream>
using namespace std;

struct node {
    int data;
    node* link;
};
node* head = NULL;

void insert (int data) {
    node* n = new node;
    n -> data = data;
    n -> link = NULL;
    
    if (head == NULL) {
        head = n;
    }
    else {
        node* temp = head;
        while (temp -> link != NULL) {
            temp = temp -> link;
        }
        temp -> link = n;
    }
}

void display () {
    node* temp = head;
    cout << "Linked list: ";
    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> link;
    }
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    display();

    return 0;
}