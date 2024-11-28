#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insertNodeAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);

    if (head == NULL)
    {
        head=temp;
    }
    else
    {

        temp->next = head;
        head = temp;
        cout << "Data is : " << head->data;
    }
}

int main()
{

    Node *head = NULL;
    // Node *temp = new Node(12);

    insertNodeAtHead(head, 12);

    cout << "\n";

    return 0;
}