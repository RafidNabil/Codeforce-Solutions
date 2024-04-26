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

        ll a[n], b[n + 1];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];

            if (i == n - 1)
                b[n] = b[n - 1] - 1;
        }

        if (is_sorted(b, b + n))
        {
            cout << 1 << " " << n << endl;
            continue;
        }

        ll cnt = 1;

        vector<pair<ll, ll>> v;

        for (ll i = 0; i < n; i++)
        {
            if (b[i] <= b[i + 1])
            {
                cnt++;
            }
            else
            {
                v.pb({i, cnt});
                cnt = 1;
            }
        }

        // for (auto i : v)
        //     cout << i.first << " " << i.second << endl;

        ll l = 0, r = 0, md = -1;

        for (auto i : v)
        {
            if (i.second > md)
            {
                int x = i.first - i.second + 1, y = i.first;

                if (!equal(a + x, a + y, b + x))
                {
                    md = i.second;
                    l = i.first - i.second + 1;
                    r = i.first;
                }
            }
        }

        cout << l + 1 << " " << r + 1 << endl;
    }

    return 0;
}