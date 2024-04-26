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
        ll n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<ll> vt(n);

        for (ll i = 0; i < n; i++)
            cin >> vt[i];

        ll fl = 1;
        for (ll i = 0; i < n; i++)
        {
            ll dst = (i == 0 ? vt[i] : vt[i] - vt[i - 1]);

            if (dst * a >= b)
                f -= b;
            else if (dst * a < b)
                f -= dst * a;

            if (f <= 0)
            {
                fl = 0;
                break;
            }
        }

        if (fl)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}