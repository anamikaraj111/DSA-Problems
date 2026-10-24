//insert at position
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
void insertAtPosition(Node* &head, int position , int data){
    Node* temp= head;
    int count=1;
     while(count < position-1){
        temp=temp->next;
        count++;
     }
     Node* nodeToinsert= new Node(data);
     nodeToinsert->next= temp->next;
     temp->next= nodeToinsert;
}
void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node*node1= new Node(10);
    node1->next=  new Node(11);
    node1->next->next= new Node(13);
    Node* head= node1;
    print(head);
    insertAtPosition(head, 3, 40);
    print(head);
}