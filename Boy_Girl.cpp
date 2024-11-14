#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int cont=0;
    for( int i=0; i<s.size(); i++)
    {
        if(s[i]!=s[i+1])
        {
            cont++;
        }
    }

    if (cont % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }
    return 0;

}
