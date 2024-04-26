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

        ll a[n], s = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }

        ll ans = s;
        for (ll i = 0; i < n - 1; i++)
        {
            ll sm = (a[i] * -1) + (a[i + 1] * -1);
            ll x = s - (a[i] + a[i + 1]);
            x = x + sm;

            ans = max(ans, x);
        }

        cout << ans << endl;
    }

    return 0;
}