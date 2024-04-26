#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

ll mindst(ll x, ll y, vector<pair<ll, ll>> crd, ll s, ll n)
{
    ll mn = INT64_MAX;

    for (ll i = 0; i < n; i++)
    {
        if (i != s)
            mn = min(abs(crd[i].first - x) + abs(crd[i].second - y), mn);
    }

    return mn;
}

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
        ll n, k, a, b;
        cin >> n >> k >> a >> b;

        vector<pair<ll, ll>> crd;

        for (ll i = 0; i < n; i++)
        {
            ll u, v;
            cin >> u >> v;
            crd.pb({u, v});
        }
        if (k == 0)
        {
            cout << abs(crd[a - 1].first - crd[b - 1].first) + abs(crd[a - 1].second - crd[b - 1].second) << endl;
        }
        else if (a <= k && b <= k)
            cout << 0 << endl;
        else if (a <= k && b > k)
        {
            cout << mindst(crd[b - 1].first, crd[b - 1].second, crd, b - 1, k) << endl;
        }
        else if (a > k && b <= k)
            cout << mindst(crd[a - 1].first, crd[a - 1].second, crd, a - 1, k) << endl;
        else
        {
            ll p = mindst(crd[b - 1].first, crd[b - 1].second, crd, b - 1, k), q = mindst(crd[a - 1].first, crd[a - 1].second, crd, a - 1, k);
            ll r = abs(crd[a - 1].first - crd[b - 1].first) + abs(crd[a - 1].second - crd[b - 1].second);
            cout << min(p + q, r) << endl;
        }
    }

    return 0;
}