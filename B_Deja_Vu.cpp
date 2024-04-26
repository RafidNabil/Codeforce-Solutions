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
        ll n, q;
        cin >> n >> q;

        ll a[n], b[q];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < q; i++)
            cin >> b[i];

        ll mn = INT64_MAX;

        for (ll i = 0; i < q; i++)
        {
            if (b[i] >= mn)
                continue;

            mn = min(mn, b[i]);
            ll x = (1 << b[i]);
            for (ll j = 0; j < n; j++)
            {
                if (a[j] % x == 0)
                    a[j] = a[j] + (x >> 1);
            }
        }

        for (ll i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}