#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
   string s;
   getline(cin, s);
    transform(s.begin(),s.end(),s.begin(), ::tolower);
   sort(s.begin(),s.end());
   for(int i=0;i<s.size();i++)
   {
       if(s[i]!=s[i+1])
       {
           count++;
       }
   }
   if(count>=26)
    cout<<"pangram";
   else
    cout<<"not pangram";
    return 0;

}
