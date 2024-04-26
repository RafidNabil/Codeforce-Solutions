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
    ll t;
    t = 1;
    cin >> t;

    while (t--)
    {
        ll n, m, p = 0, q = 0;
        cin >> n >> m;

        ll a[n], b[m];

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            p = p ^ a[i];
        }

        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
            q = q | b[i];
        }

        ll mx = 0, mn = 0;

        if (n % 2 != 0)
        {
            for (ll i = 0; i < n; i++)
                mx = mx^(a[i] | q);

            mn = p;
        }
        else
        {
            for (ll i = 0; i < n; i++)
                mn = mn^(a[i] | q);

            mx = p;
        }

        cout << mn << " " << mx << endl;
    }

    return 0;
}
