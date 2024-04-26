#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
const ll M = 1e9 + 7;
// const ll M = 1e18+7;

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

        ll a[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll cnt = 0;
        vector<ll> vt;

        for (ll i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
                cnt++;

            if (a[i] != a[i - 1] && cnt != 0)
            {
                vt.pb(cnt + 1);
                cnt = 0;
            }
        }

        if (cnt != 0)
        {
            vt.pb(cnt + 1);
        }

        if (vt.empty() || (vt.size() == 1 && vt[0] == 2))
            cout << "0" << endl;
        else
        {
            ll sum = 0;
            for (ll i : vt)
            {
                sum += i / 2;
            }
            cout << sum << endl;
        }
    }

    return 0;
}