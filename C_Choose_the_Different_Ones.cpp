#include <iostream>
#include <bits/stdc++.h>

#define pb push_back

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
        ll n, m, k;
        cin >> n >> m >> k;

        set<ll> a;
        set<ll> b;
        set<ll>::iterator it;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x <= k)
                a.insert(x);
        }

        for (ll i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            if (x <= k)
                b.insert(x);
        }

        map<ll, ll> mp;

        for (auto i = a.begin(); i != a.end(); i++)
            mp[*i] = 1;

        for (auto i = b.begin(); i != b.end(); i++)
        {
            if (mp.count(*i) == 0)
                mp[*i] = 2;
            else
            {
                mp[*i]++;
                mp[*i]++;
            }
        }

        // for (auto i : mp)
        //     cout << i.first << " " << i.second << endl;

        ll f = 0, s = 0, d = 0;

        for (auto i : mp)
        {
            if (i.second == 1)
                f++;
            else if (i.second == 2)
                s++;
            else if (i.second == 3)
                d++;
        }

        if (f > (k / 2) || s > (k / 2))
        {
            cout << "NO" << endl;
        }
        else if (f < (k / 2) || s < (k / 2))
        {
            if ((k - f - s) == d)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}