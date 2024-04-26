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
        ll n;
        cin>>n;

        ll v[n];

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        ll  count = 0;

        set <ll> st;
        ll d[n];
        for(int i = n-1; i>=0; i--)
        {
            st.insert(v[i]);
            d[i] = st.size();
        }

        ll ans = n-1-d[0], l = 1, r = n;
        for(int i = 1; i<n; i++)
        {
            ll temp = n-(i+1)-d[i];
            if(temp>ans)
            {
                l =i+1;
                r = n;
            }
        }

        cout<<l<<" "<<r<<endl;
    }
 
    return 0;
}