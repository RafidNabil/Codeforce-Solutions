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
        vector <ll> v;

        ll n;
        cin>>n;

        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>>x;

            v.pb(x);
        }

        ll g = __gcd(v[0], v[1]);
        for(ll i=2; i<n; i++)
        {
            g = __gcd(g, v[i]);
        }

        cout<<(v.back())/g<<endl;
    }
 
    return 0;
}