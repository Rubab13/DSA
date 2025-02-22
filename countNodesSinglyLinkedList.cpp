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

void count () {
    int count = 0;
    node* temp = head;
    while (temp != NULL) {
        temp = temp -> link;
        count = count + 1;
    }
    cout << "\nThe number of nodes in the list are " << count << ".";
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    insert(2);
    insert(2);
    display();
    count();

    return 0;
}#include <iostream>
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

void count () {
    int count = 0;
    node* temp = head;
    while (temp != NULL) {
        temp = temp -> link;
        count = count + 1;
    }
    cout << "\nThe number of nodes in the list are " << count << ".";
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    insert(2);
    insert(2);
    display();
    count();

    return 0;
}