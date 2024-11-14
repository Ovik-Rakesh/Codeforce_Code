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
void InsertAtspecificPostion(Node *&head,int pos,int val);
int SearchByUniqueValue(Node *&head,int key);
void SearchByDuplicateValue(Node *&head,int key);
int countlength(Node *&head);
//void SearchByDuplicateValuereturn(Node *&head,int key);
void SearchByValueUnique(Node *&head,int searchValue,int value);

struct Test
{
    int position[1000];
};

int main()
{
    Node *head = NULL;
    int choice,n,pos,position;
    cout<<"choice-1 : Insert at head"<<endl;
    cout<<"choice-2 : Insert at Tail"<<endl;
    cout<<"Choice-3 : Insert at specific position"<<endl;
    cout<<"choice-4 : Search a value (Unique list)"<<endl;
    cout<<"choice-5 : Search by value ( Duplicate list ) "<<endl;
//    cout<<"choice-6 : Search by value ( Duplicate list Return ) "<<endl;
    cout<<"Choice-6 : Insertion after a specific positon"<<endl;
    cout<<"choice-0:  exit"<<endl;
    cout<<"Next choice : ";
    cin>>choice;
    while(choice !=0 )
    {
        switch(choice)
        {
        case 1:
            cout<<"Enter the value: ";
            cin>>n;
            InsertAtHead(head,n);
            break;
        case 2:
            cout<<"Enter the value: ";
            cin>>n;
            InsertAtTail(head,n);
            break;
        case 3:
            cout<<"Enter the desire position: ";
            cin>>pos;
            cout<<"Enter the value: ";
            cin>>n;
            InsertAtspecificPostion(head,pos,n);
        case 4:
            cout<<"Enter the value to search: ";
            cin>>n;
            position = SearchByUniqueValue(head,n);
            if(position!=-1)
            {
                cout<<"The number is at position : "<<position<<endl;
            }
            else
            {
                cout<<"The number is not yet in the list."<<endl;
            }
        case 5:
            cout<<"Enter the value to search: ";
            cin>>n;
            SearchByDuplicateValue(head,n);

     /*   case 6:
            cout<<"Enter the value to search: ";
            cin>>n;
            Test T;
            T = SearchByDuplicateValuereturn(head,n);
            if(T.position[0]==1)
            {
                cout<<"The search value in not yet in the list"<<endl;
            }
            else
            {
                int size = T.position[0];
                cout<<"The value is found at position: ";
                for(int i=1; i<size; i++)
                {
                    cout<<T.position[i];
                    if(i<size) cout<<",";
                }
                cout<<endl;
            }
                                                      */
        case 6:
            cout<<"Enter the value to search: ";
            int searchValue;
            cin>>searchValue;
            cout<<"Insertion the value : ";
            cin>>n;
            SearchByValueUnique(head,searchValue,n);
            break;
        default:
            break;
        }
        cout<<"Next choice: ";
        cin>>choice;
    }
    cout<<"Linked List: ";
    display(head);
    return 0;

}
//.........Display...............

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
//...........InsertAtTail.....................

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
//.........InsertAtHead..................
void InsertAtHead(Node* &head,int val)
{
    Node *newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
}
//.........Count of linked list .................
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
//....................................
//...........Insert at specific position ........................
void InsertAtspecificPostion(Node *&head,int pos,int val)
{
    int i=0;
    Node *temp = head;
    while(i<pos-2)
    {
        temp = temp->Next;
        i++;
    }
    Node *newNode = new Node(val);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}
//..............End of singular linked list Insertion ...........

//...............Search Unique value .............................
int SearchByUniqueValue(Node *&head,int key)
{
    int count = 1;
    Node *temp = head;
    if(temp==NULL)
    {
        return -1;
    }
    while(temp->value!= key)
    {
        temp = temp->Next;
        if(temp->Next==NULL)
        {
            return -1;
        }
        count++;
    }
    return count;
}
//.....................Search by duplicate value ......................................
void SearchByDuplicateValue(Node *&head,int key)
{
    int k=1,sz,flag=0;
    sz = countlength(head);
    int ar[sz+1];
    Node *temp = head;
    int count = 1;
    while(temp!=NULL)
    {
        if(temp->value==key)
        {
            ar[k]=count;
            k++;
            flag = 1;
        }
        temp = temp->Next;
        count++;
    }
    if(flag==0) cout<<"The searched value is not yet in the list"<<endl;
    else
    {
        ar[0] = k;
        cout<<"The search value is found at position: ";
        for(int i =1; i<ar[0]; i++)
        {
            cout<<ar[i];
            if(i<ar[0]-1) cout<<",";
        }
        cout<<endl;
    }
}
//.........................................................................
 /* Test SearchByDuplicateValuereturn(Node *&head,int key)
{
    Test T;
    Node *temp = head;
    int count = 1,k;
    while(temp!=NULL)
    {
        if(temp->value==key)
        {
            T.position[k]=count;
            k++;
        }
        temp = temp->Next;
        count++;
    }
    T.position[0] = k;
    return T;
}
}   */
//.........................................................
void SearchByValueUnique(Node *&head,int searchValue,int value)
{
    int position;
    position = SearchByUniqueValue(head,value);
    InsertAtspecificPostion(head,position+1,value);

}
