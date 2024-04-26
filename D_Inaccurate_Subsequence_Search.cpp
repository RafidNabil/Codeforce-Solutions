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
        ll n, m, k;
        cin >> n >> m >> k;

        ll a[n];
        map<ll, ll> b;

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            b[x]++;
        }

        map<ll, ll> c;

        for (ll i = 0; i < m; i++)
            c[a[i]]++;

        ll cnt = 0;

        for (auto i = b.begin(); i != b.end(); i++)
        {
            ll x = i->first;
            if (c.find(x) != c.end())
                cnt++;
        }

        ll ans = (cnt >= k ? 1 : 0);

        for (ll i = 0; i < n - m; i++)
        {
            if ((b.find(a[i]) != b.end()))
            {
                if (b[a[i]] != 0 && c[a[i]] == 1)
                    cnt--;
            }

            c[a[i]]--;

            if ((b.find(a[i + m]) != b.end()))
            {
                if ((b[a[i + m]] != 0) && (c.find(a[i + m]) == c.end() || c[a[i + m]] == 0))
                    cnt++;
            }

            c[a[i + m]]++;

            if (cnt >= k)
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}