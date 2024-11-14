#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next;
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};
// Insert of Tail :
void InsertAtTail(Node* &head,int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        return ;
    }
    Node *temp = head;
    while(temp->Next != NULL )
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}
// Insert of Head :
void InsertAtHead(Node* &head,int val)
{
    // Create new node:
    Node *newNode = new Node(val);
    // update of newNode->Next :
    newNode->Next = head;
    // update of Head :
    newNode = head;
}
// Display function:
void display(Node *n)
{
    while(n!= NULL)
    {
        cout<<
    }
}
int main()
{
    Node *head = NULL;
    return 0;

}
