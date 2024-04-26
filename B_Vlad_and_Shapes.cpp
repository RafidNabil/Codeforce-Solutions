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

        string a[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> vt;

        for (ll i = 0; i < n; i++)
        {
            ll f = -1;
            for (ll j = 0; j < n; j++)
            {
                if ((a[i][j] == '1') && (f == -1))
                {
                    f = 0;
                    vt.pb(j);
                }
            }
        }

        ll fl = 1;

        for (ll i = 1; i < vt.size(); i++)
        {
            if (vt[i] != vt[i - 1])
            {
                fl = 0;
                break;
            }
        }

        if (fl == 0)
            cout << "TRIANGLE" << endl;
        else if (fl == 1)
            cout << "SQUARE" << endl;
    }

    return 0;
}