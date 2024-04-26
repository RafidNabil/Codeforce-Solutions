#include <iostream>
#include <bits/stdc++.h>
 
#define pb push_back
#define mp make_pair
typedef long long ll;
 
using namespace std;
 
int main()
{
    int t;
    //t = 1;
    cin >> t;
 
    while (t--)
    {
        vector<int> v;

        int n;
        cin>>n;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;

            v.pb(x);
        }

        sort(v.begin(), v.end());

        int ans = INT_MAX;

        for(int i=0; i<n-2; i++)
        {
            int x = (v[i+2]-v[i+1])+(v[i+1]-v[i]);
            ans = min(ans, x);
        }

        cout<<ans<<endl;
    }
 
    return 0;
}