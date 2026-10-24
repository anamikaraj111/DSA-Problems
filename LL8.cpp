// insert at position in doubly linked list

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtPosition(Node*& head, int position, int data) {
    Node* newNode = new Node(data);

    if (head == NULL || position <= 1) {
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    Node* temp = head;
    int current = 1;

    while (temp != NULL && current < position) {
        temp = temp->next;
        current++;
    }

    if (temp == NULL) {
        Node* last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = newNode;
        newNode->prev = last;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;

    if (newNode->next != NULL) {
        newNode->next->prev = newNode;
    }
}

void print(Node*& head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
    node1->next = new Node(20);
    node1->next->prev = node1;
    node1->next->next = new Node(30);
    node1->next->next->prev = node1->next;
    node1->next->next->next = new Node(40);
    node1->next->next->next->prev = node1->next->next;

    Node* head = node1;
    insertAtPosition(head, 2, 25);
    print(head);

    return 0;
}