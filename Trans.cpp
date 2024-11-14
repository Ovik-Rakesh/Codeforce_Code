#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int len = s1.size();
    for(int i=0; i<len/2; i++)
    {
        swap(s1[i],s1[len-i-1]);
    }
    if(s1==s2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}
