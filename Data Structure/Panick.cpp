#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int ar[26]= {0};
    int index,i=0;
    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i]<='Z')
            index = s[i]-'A';
        else
            index = s[i]-'a';
        ar[index]++;
        i++;
    }
    for(int i=0; i<26; i++)
    {
        if(ar[i]==0)
        {
            cout<<"not pangram";
            return 0;
        }
    }
    cout<<"pangram";
    return 0;

}
