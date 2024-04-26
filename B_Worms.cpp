#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n, m;

    cin >> n;

    ll c = 1, x, z;
    map<ll, ll> a;
    map<ll, ll> ::iterator it;

    cin>>x;
    a.insert(pair<ll, ll>(1, x));

    c=x+1;
    for(int i=1; i<=n-1; i++)
    {
        cin>>z;
        a.insert(pair<ll, ll>(c, c+z-1));
        x=z;
        c== c+x+1;
    }

    for (it = a.begin(); it != a.end(); it++)
        cout << it->first << " " << it->second << endl;

    return 0;
}