#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void atstart(Node* &head,int data){
    Node* temp=new Node(data);
    if(head==NULL){
        head=temp;
    }else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void atlast(Node* &head,int data){
    Node* temp=new Node(data);
    Node* curr=head;
    if(head==NULL){
        head=temp;
    }
    else{
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
        temp->prev=curr;
    }

}
void print(Node* &head){
    Node* print=head;
    while(print!=NULL){
        cout<<print->data<<" ";
        print=print->next;
    }
}

int main(){
    Node* head=NULL;

    atstart(head,12);
    atstart(head,13);

    atlast(head,11);

    print(head);

    return 0;
}