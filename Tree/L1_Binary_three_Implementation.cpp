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

int main(){
    int x;
    cout<<"Enter the root element : ";
    cin>>x;
    int first,second;
    queue<Node*>q;
    Node *root= new Node(x);
    q.push(root);

    //Build the Binary Tree
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        cout<<"Enter the Left child of "<<temp->data<<" : ";
        cin>>first;  //left Node value       
        //Left Node
        if(first!=-1){            
            temp -> left = new Node(first);
            q.push(temp->left);
        }

        //right Node
        cout<<"Enter the Right child of "<<temp->data<<" : ";
        cin>>second;  //right Node value       
        //Right Node
        if(second!=-1){            
            temp -> right = new Node(second);
            q.push(temp->right);
        }

    }
}