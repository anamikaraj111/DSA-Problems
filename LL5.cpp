//delete a  node 
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
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<value<<endl;
    }
};
void deleteNode(Node*&head, int position){
    if(position==1){
        Node* temp=head;
        head= head->next;
        delete temp;
    }
    else{
        Node* curr= head;
        Node* prev=NULL;
        int count=1;
        while(count<=position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next= curr->next;
        curr->next-NULL;
        delete curr;
    }
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
    deleteNode(head,2);
    print(head);

}