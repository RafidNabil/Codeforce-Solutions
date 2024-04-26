#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int  main()
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
        vector<ll> ev;
        vector<ll> ov;
        vector<ll> ans;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] % 2 == 0)
                ev.pb(a[i]);
            else
                ov.pb(a[i]);
        }

        sort(ev.begin(), ev.end());
        sort(ov.begin(), ov.end());

        ll i = 0, j = 0;

        for (ll k = 0; k < n; k++)
        {
            if (a[k] % 2 == 0)
            {
                ans.pb(ev[i]);
                i++;
            }
            else if (a[k] % 2 != 0)
            {
                ans.pb(ov[j]);
                j++;
            }
        }

        if (is_sorted(ans.begin(), ans.end()))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}