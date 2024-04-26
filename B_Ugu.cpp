#include <iostream>
#include <bits/stdc++.h>
 
#define pb push_back
#define mp make_pair
typedef long long ll;
 
using namespace std;
 
int main()
{
    int t;
    t = 1;
    cin >> t;
 
    while (t--)
    {
        int n;

        cin>>n;

        string s;

        cin>>s;

        int flag = 1, o, z, count = 0;
        for(int i=0; i<n; i++)
        {
            if(flag ==1)
            {
                if(s[i] == '0' && s[i-1] == '1')
                {
                    count++;
                    flag = 0;
                }
            }
            else
            {
                if(s[i] == '1' && s[i-1] == '0')
                {
                    count++;
                    flag = 1;
                }

            }
        }

        cout<<count<<endl;
    }
 
    return 0;
}