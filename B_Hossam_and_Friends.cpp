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
        ll n, m;
        cin>>n>>m;

        pair <ll, ll> prs[m];

        for(int i=0; i<m; i++)
        {
            ll x, y;
            cin>>x>>y;

            prs[i] = mp(x, y);
        }

        sort(prs, prs+m);

        map<ll , ll> ss;

        for(ll i=0; i<m; i++)
        {
            
        }

        
    }
 
    return 0;
}