#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt;
    tt = 1;
    cin >> tt;

    while (tt--)
    {
        ll n;
        cin >> n;

        vector<ll> a[n + 1];

        for (ll i = 0; i < n - 1; i++)
        {
            ll u, v;
            cin >> u >> v;
            a[u].pb(v);
            a[v].pb(u);
        }

        ll leaf = 0;

        for (auto it : a)
        {
            if (it.size() == 1)
                leaf++;
        }

        cout << (leaf % 2 == 0 ? (leaf / 2) : ((leaf / 2) + 1)) << endl;
    }

    return 0;
}