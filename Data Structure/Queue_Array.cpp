#include<bits/stdc++.h>
#define sz 50
using namespace std;
int r = -1;
int f = -1;
int ar[sz];
void Enqueue(int val)
{
    if(r==sz-1)
    {
        cout<<"Queue is Overflow"<<endl;
    }
    else
    {
        if(r+1==f)
        {
            cout<<"Queue is full"<<endl;
        }
        else
        {
            f=0;
            r++;
            ar[r] = val;
            cout<<"Enqueue value is : "<<ar[r]<<endl;
        }
    }
}
void Dequeue()
{
    if(f==-1)
    {
        cout<<"Cannot dequeue! Queue is underflow"<<endl;
    }
    else
    {
        cout<<"Dequeue value is : "<<ar[f]<<endl;
        f++;
        if(f>r)
            f=r=-1;
    }
}
void display()
{
    if(f==r==-1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue value is: ";
        for(int i=f; i<=r; i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int value,ch;
    cout<<"1.Enqueue"<<endl;
    cout<<"2.Dequeue"<<endl;
    cout<<"3.show"<<endl;
    cout<<"4.exist(0)"<<endl;
    cout<<"Enter your choice (1 to 4) : ";
    cin>>ch;
    while(ch<=4)
    {
        switch(ch)
        {
        case 1:
            cout<<"Enter the value : ";
            cin>>value;
            Enqueue(value);
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout<<"Invalid value!";
            break;
        }
        cout<<"Enter your choice (1 to 4) : ";
        cin>>ch;
    }

    return 0;

}
