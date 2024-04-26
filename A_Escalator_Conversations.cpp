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
        ll n, m, k, h;
        cin >> n >> m >> k >> h;

        ll a[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll cnt = 0;

        for (ll i = 0; i < n; i++)
        {
            ll d = abs(h - a[i]);

            if (d < k * m && d % k == 0 && d != 0)
                cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}