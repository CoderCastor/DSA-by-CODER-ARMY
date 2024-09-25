#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }

    
};

void insert(Node *& head){
    

}


int main()
{

    Node *head = new Node(12);
    cout << head->data;

    return 0;
}


//I'm castor