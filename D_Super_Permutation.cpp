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

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        ll s = (n * (n + 1) / 2);

        if (s % n == 0)
        {
            cout << -1 << endl;
            continue;
        }

        vector<ll> a;
        vector<ll> b;
        ll p = n - 1;

        for (ll i = 1;; i++)
        {
            if ((n * i) + p <= s)
            {
                a.pb((n * i) + p);
                p--;
            }
            else
                break;
        }

        ll q = 1;

        for (ll i = 2;; i++)
        {
            if ((n * i) + q <= s)
            {
                b.pb((n * i) + q);
                q++;
            }

            if (p + 1 == q)
                break;
        }

        ll ans[n];

        ans[0] = n;

        auto j = a.begin();
        for (ll i = 1; j != a.end(); i += 2)
        {
            ans[i] = *j;
            j++;
        }

        j = b.begin();
        for (ll i = 2; j != b.end(); i += 2)
        {
            ans[i] = *j;
            j++;
        }

        cout << n << " ";

        for (ll i = 0; i < n - 1; i++)
            cout << ans[i + 1] - ans[i] << " ";

        cout << endl;
    }

    return 0;
}