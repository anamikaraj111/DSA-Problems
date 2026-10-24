//reverse a linked list
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
Node* Reverse(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev=NULL;
    Node* curr= head;
    Node* forward=NULL;
    while(curr!=NULL){
        forward= curr->next;
        curr->next= prev;
        prev=curr;
        curr= forward;
    }
    return prev;
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
    node1->next->next->next= new Node(40);
    Node* head= node1;
    head = Reverse(head);
    print(head);
}