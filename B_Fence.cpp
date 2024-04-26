#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> vt;
        vector<ll> ps;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            vt.pb(x);

            if (i == 0)
            {
                ps.pb(x);
            }
            else
            {
                ps.pb(ps[i - 1] + x);
            }
        }

        ll mn = INT_MAX, indx;
        for (int i = 0; i + k < n; i++)
        {
            if (mn > ps[i + k] - ps[i])

            {
                mn = ps[i + k] - ps[i];
                indx = i+2;
            }
        }

        if (ps[k - 1] < mn)
            indx = 1;

        cout << indx << endl;
    }

    return 0;
}