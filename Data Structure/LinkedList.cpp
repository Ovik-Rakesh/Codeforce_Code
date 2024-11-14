#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node* Next;
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};
//,,,,,,,,,,,,,,,,,,
void display(Node *n);
void InsertAtTail(Node* &head,int val);
void InsertAtHead(Node* &head,int val);
int countlength(Node *&head);

int main()
{
    Node *head = NULL;
    int choice,n;
    cout<<"choice-1:Insert at head."<<endl;
    cout<<"choice-2:Insert at Tail."<<endl;
    cout<<"choice-0:exit"<<endl;
    cout<<"Next choice : ";
    cin>>choice;
    while(choice !=0 )
    {
        cout<<"Enter the value: ";
        cin>>n;
        switch(choice)
        {
        case 1:
            InsertAtHead(head,n);
            break;
        case 2:
            InsertAtTail(head,n);
            break;
        default:
            break;
        }
        cout<<"Next choice: ";
        cin>>choice;
    }
    cout<<"Linked List: ";
    display(head);
    cout<<endl<<"Length of linked list: "<<countlength(head)<<endl;
    return 0;

}
//........................

void display(Node *n)
{
    while(n!=NULL)
    {
        cout<<n->value;
        if(n->Next !=NULL)
            cout<<"->";
        n = n->Next;
    }
}
//................................

void InsertAtTail(Node* &head,int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        return ;
    }
    Node *tem = head;
    while(tem->Next !=NULL)
    {
        tem = tem->Next;
    }
    tem->Next = newNode ;
}
//...........................
void InsertAtHead(Node* &head,int val)
{
    Node *newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
}
//..........................
int countlength(Node *&head)
{
    int count = 0;
    Node *tem = head;
    while(tem!=NULL)
    {
        count++;
        tem = tem->Next;
    }
    return count;
}
