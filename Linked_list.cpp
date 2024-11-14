#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next;
    // Constructor creation:
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};
// InsertAtTail function creation:
void insertAtTail(Node* &head,int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        return ;
    }
    Node *tem = head;

    while(tem->Next != NULL)
    {
        tem = tem->Next;
    }
    tem->Next = newNode;

}
// InsertAtHead function creation:
void InsertAtHead(Node* &head,int val)
{
    // New Node creation:
    Node *newNode2= new Node();
    // update of newNode->Next:
    newNode2>Next = head;
    // update of head :
    head = newNode2;
}

// Display function creation:
void display(Node *n)
{
    while(n != NULL)
    {
        cout<< n->value;
        if( n->Next != NULL )
            cout<<"->";
        n=n->Next;
    }
}
int main()
{
    Node *head = NULL;
    cout<<"1.Insertion of Head\n"<<endl;
    cout<<"2.Insertion of Tail\n"<<endl;
    cout<<"3.Exit"<<endl;
    int n;
    switch(true)
    {
        cout<<"Enter the value: ";
        cin>>n;
    case 1:
        InsertAtHead(head,n);
        break;
    case 2:
        insertAtTail(head,n);
        break;
    default :
        exist(0);
    }

    display(head);

    return 0;
}
