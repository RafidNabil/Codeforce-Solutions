#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
// #define mp make_pair
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
        ll n, k;
        cin >> n >> k;

        ll a[n], b[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < n; i++)
            cin >> b[i];

        vector<pair<ll, ll>> mp;

        for (ll i = 0; i < n; i++)
            mp.pb({abs(b[i]), a[i]});

        sort(mp.begin(), mp.end());

        ll stp = ((mp[0].second) % k == 0 ? (mp[0].second / k) : (mp[0].second / k) + 1);
        ll bl = stp * k - (mp[0].second);

        bool f = true;

        if (stp > mp[0].first)
            f = false;
        else
        {
            for (auto i = 1; i < n; i++)
            {
                ll h = mp[i].second - bl;
                ll sl = mp[i].first - stp;

                if (h <= 0)
                {
                    bl -= h;
                    continue;
                }

                // if (sl <= 0)
                // {
                //     f = false;
                //     break;
                // }

                ll s = (h % k == 0 ? (h / k) : (h / k) + 1);
                if (s > sl)
                {
                    f = false;
                    break;
                }
                stp += s;
                bl = s * k - (h);
            }
        }

        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}