#include<bits/stdc++.h>
#define sz 20
using namespace std;
int top = -1;
int st[sz];
void push(int val)
{
    if(sz<top)
    {
        cout<<"Cannot push!Stack is full"<<endl;
    }
    else
    {
        top++;
        st[top]=val;
        cout<<"The pushed value is "<<st[top]<<endl;
    }
}
void pop()
{
    if(top<=-1)
    {
        cout<<"Cannot pop! No element to delete."<<endl;
    }
    else
    {
        cout<<"The pop value is "<<st[top]<<endl;
        top--;
    }

}
void show()
{
    if(top>=0)
    {
        cout<<"Stack element are : ";
        for(int i=0; i<=top; i++)
        {
            cout<<st[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"Stack is empty!"<<endl;
    }
}
int main()
{
    int val,ch;


    cout<<"1.push"<<endl<<"2.Pop"<<endl<<"3.show"<<endl<<
        "4.exist(0)"<<endl;
    cout<<"Enter your choice (1 to 4) : ";
    cin>>ch;
    while(ch<=4)
    {
        switch(ch)
        {
        case 1:
            cout<<"Enter the value: ";
            cin>>val;
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout<<"Invalid Choice!";
            break;
        }
        cout<<"Enter your choice (1 to 4) : ";
        cin>>ch;
    }


    return 0;

}
