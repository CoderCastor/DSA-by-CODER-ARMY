#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

//Function
Node * BinaryTree(){
    int x;
    cin>>x;
    if(x==-1) return NULL;

    Node *temp = new Node(x);
    //Left side Create
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left = BinaryTree();
    //Right side create
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right = BinaryTree();
    return temp;
}

int main(){
    cout<<"Enter the root No. : ";
    Node *root;
    root = BinaryTree();
}    