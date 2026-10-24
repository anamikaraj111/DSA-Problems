//insert at head
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
void insertAtHead(Node* &head, int data){
    Node* temp= new Node(data);
    temp->next=head;
    head=temp;
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
    Node* head= node1;
    print(head);
    insertAtHead(head,1);
    print(head);
}