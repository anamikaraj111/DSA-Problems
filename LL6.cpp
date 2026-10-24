//insert at head in doubly linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertAthead(Node* &head,  int data){
    Node* temp= new Node(data);
    temp->next= head;
    head->prev= temp;
    head= temp;
}

void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* node1= new Node(10);
    node1->next= new Node(20);
    node1->next->next= new Node(30);
    node1->next->next= new Node(40);
    Node* head= node1;
    insertAthead(head,2);
    print(head);
}