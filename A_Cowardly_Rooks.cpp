#include <iostream>
#include <bits/stdc++.h>
 
#define pb push_back
#define mp make_pair
typedef long long ll;
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, m;

        cin>>n>>m;

        for(int i=0; i<m; i++)
        {
            int a, b;
            cin>>a>>b;
        }

        if(m==n)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
 
    return 0;
}