#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;
/*
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int val)
    {
        value = val;
        next = NULL;
    }

};
class Stack
{
    int count=0;
    Node *head;
    Node *top;
public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    // PUSH  operation
    void Push(int val)
    {
        Node *newNode = new Node(val);
        if(head==NULL)
        {
            head = top = newNode;
            count++;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }
    // POP Operation
    int Pop()
    {
        Node *delNode;
        delNode = top ;
        int del=-1;
        if(head==NULL) // There is no element
        {
            cout<<"Stack is underflow"<<endl;
            return del;
        }
        if(head==top) // there is one element
        {
            head = top = NULL;
        }
        else //there in more than one element
        {
            top = delNode->prev;
            top->next = NULL;

        }
        del = delNode->value;
        delete delNode;
        count++;
        return del;
    }
    bool Empty()
    {
        if(head==NULL)
            return true;
        else return false;
    }
    int Top()
    {
        int chk;
        if(top==NULL)
        {
            cout<<"Stack is underflow ! There is no element"<<endl;
            chk=-1;
        }
        else
            chk = top->value;
        return chk;
    }
    int Size()
    {
        return count;
    }
};

*/

int main()
{
    Stack st;
    st.Push(1);
    st.Push(2);
    st.Push(3);
    cout<<st.Size()<<endl;
    while(!st.Empty())
    {
        cout<<st.Pop()<<endl;
    }
    cout<<st.Pop()<<endl;


    return 0;

}
