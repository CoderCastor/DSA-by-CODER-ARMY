#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

void insertAtPosition(Node* &head,Node* &tail,int pos,int data){
    Node* curr; Node* prev;
    Node* NEW=new Node(data);
    if(pos==1){
        if(head==NULL){
            head=NEW;
            tail=NEW;
            return;
        }
        NEW->next=head;
        head=NEW;
        return;
    }

    //trverse
    Node* cnt=head;
    int cnt1=0;
    while(cnt!=NULL){
        cnt1++;
        cnt=cnt->next;
    }
    if(pos-1==cnt1){
        Node* temp=new Node(data);
        tail->next=temp;
        tail=tail->next;
        return;
    }
    if(pos>cnt1 || pos==0){
        cout<<"Position Doesn't Exist";
        return;
    }
    curr=head; prev=NULL;
    for(int i=1;i<=pos-1;i++){
        prev=curr;
        curr=curr->next;
    }
    prev->next=NEW;
    NEW -> next=curr;
}

void print(Node* &head){
    Node* temp=head;
    cout<<endl;
    if(temp==NULL){
        cout<<"\nLikedList is Empty";
        cout<<endl;
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    
    

    insertAtPosition(head,tail,1,1);
    insertAtPosition(head,tail,2,2);
    insertAtPosition(head,tail,2,3);
    insertAtPosition(head,tail,1,4);
    insertAtPosition(head,tail,0,1);
    print(head);

    return 0;
}