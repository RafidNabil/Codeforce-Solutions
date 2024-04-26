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
        ll n, k;

        cin >> n >> k;

        map<ll, ll> m;
        map<ll, ll> p;

        vector<ll> ad;
        vector<ll> bd;
        vector<ll> u;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            m[x]++;
        }

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            p[x]++;
        }

        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second == 1)
                u.pb(i->first);
            else
                ad.pb(i->first);
        }
        for (auto i = p.begin(); i != p.end(); i++)
        {
            if (i->second == 2)
                bd.pb(i->first);
        }

        vector<ll> aa;
        vector<ll> ab;

        if (ad.size() >= k)
        {
            for (ll i = 0; i < k; i++)
                cout << ad[i] << " " << ad[i] << " ";

            cout << endl;

            for (ll i = 0; i < k; i++)
                cout << bd[i] << " " << bd[i] << " ";

            cout << endl;
        }
        else
        {
            for (ll i = 0; i < ad.size(); i++)
                cout << ad[i] << " " << ad[i] << " ";

            for (ll i = 0; i < 2 * k - (2 * ad.size()); i++)
                cout << u[i] << " ";

            cout << endl;

            for (ll i = 0; i < bd.size(); i++)
                cout << bd[i] << " " << bd[i] << " ";

            for (ll i = 0; i < 2 * k - (2 * bd.size()); i++)
                cout << u[i] << " ";

            cout << endl;
        }
    }

    return 0;
}