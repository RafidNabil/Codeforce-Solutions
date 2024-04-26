#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int t;
    // t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> vt;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            vt.pb(x);
        }

        sort(vt.begin(), vt.end());

        ll md = vt.back() - vt.front();
        ll count1 = 0, count2 = 0;

        for (ll i = 0; i < vt.size() - 1; i++)
        {
            if (vt[i] == vt.front())
                count1++;
        }

        for (ll i = vt.size() - 1; i >= 0; i--)
        {
            if (vt[i] == vt.back())
                count2++;
        }

        if (count1 == vt.size() || count2 == vt.size())
        {
            ll n = vt.size() - 1;

            ll ans = (n * (n + 1));
            cout << ans << endl;
        }
        else
            cout << (count1 * 2) * count2 << endl;
    }

    return 0;
}