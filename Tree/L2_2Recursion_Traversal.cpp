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

//------------Traversal------------

//preOrder (NLR)
void preOrder(Node * root){
    if(root==NULL) return;   //Base case
    cout<<root->data<<" ";   //Node
    preOrder(root->left);    //Left
    preOrder(root->right);   //Right
}

//inOrder (LNR)
void inOrder(Node * root){
    if(root==NULL) return;   //Base case
    inOrder(root->left);     //Left
    cout<<root->data<<" ";   //Node
    inOrder(root->right);    //Right
}

//preOrder (LRN)
void postOrder(Node * root){
    if(root==NULL) return;   //Base case
    postOrder(root->left);   //Left
    postOrder(root->right);  //Right
    cout<<root->data<<" ";   //Node
}

int main(){
    cout<<"Enter the root No. : ";
    Node *root;
    root = BinaryTree();

    cout<<"\npre-Order : ";
    preOrder(root);

    cout<<"\nin-Order : ";
    inOrder(root);

    cout<<"\npost-Order : ";
    postOrder(root);

}    