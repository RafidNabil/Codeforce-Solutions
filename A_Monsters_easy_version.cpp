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
        ll n;
        cin >> n;

        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        ll ans = 0;

        if (a[0] == 1)
        {
            vector<ll> v;

            for (ll i = 0; i < n; i++)
            {
                if (a[i] > 1)
                    v.pb(a[i]);
            }

            ll x = 2;
            for (auto i : v)
            {
                if (i >= x)
                    ans += i - (x++);
            }
        }
        else
        {
            ll x = 1;
            for (ll i = 0; i < n; i++)
            {
                if (a[i] >= x)
                {
                    ans += a[i] - (x++);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}