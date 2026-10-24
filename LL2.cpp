//insert at tail
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    temp->next = NULL;
    tail->next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;

    }
}

int main(){
    Node* node1 = new Node(10);
    node1->next= new Node(20);
    node1->next->next= new Node(30);
    Node* tail = node1;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    Node* head = node1;
    insertAtTail(tail, 45);
    print(head);

}