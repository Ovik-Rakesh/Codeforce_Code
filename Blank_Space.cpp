#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int max_len = 0;
        int current_len = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                current_len++;
            }
            else
            {
                if(current_len>max_len)
                {
                    max_len = current_len;
                }
                current_len = 0;
            }
            if(current_len>max_len)
            {
                max_len = current_len;
            }

        }
        cout<<max_len<<endl;

    }

    return 0;

}
/*
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    while(num--)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int max_len = 0;
        int current_len = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                current_len++;
            } else {
                if (current_len > max_len) {
                    max_len = current_len;
                }
                current_len = 0;
            }
        }
        if (current_len > max_len) {
            max_len = current_len;
        }
        printf("%d\n", max_len);
    }
    return 0;
}
*/
