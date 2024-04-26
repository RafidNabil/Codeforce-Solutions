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

        pair<ll, ll> a[n];
        pair<ll, ll> b[n];
        pair<ll, ll> c[n];

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            a[i] = {x, i};
        }

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            b[i] = {x, i};
        }

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            c[i] = {x, i};
        }

        sort(a, a + n, greater<>());
        sort(b, b + n, greater<>());
        sort(c, c + n, greater<>());

        ll mx = 0;

        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                for (ll k = 0; k < 3; k++)
                {
                    if (a[i].second != b[j].second && a[i].second != c[k].second && c[k].second != b[j].second)
                    {
                        ll x = a[i].first + b[j].first + c[k].first;
                        mx = max(mx, x);
                    }
                }
            }
        }

        cout << mx << endl;
    }

    return 0;
}