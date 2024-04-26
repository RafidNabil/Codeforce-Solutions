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
    ll tt;
    tt = 1;
    cin >> tt;

    while (tt--)
    {
        ll n;
        cin >> n;

        vector<ll> vt(n, 0);
        ll b[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> vt[i];
            b[i] = vt[i];
        }

        sort(vt.begin(), vt.end());

        ll a[n];
        a[0] = vt[0];

        for (ll i = 1; i < n; i++)
            a[i] = vt[i] + a[i - 1];

        map<ll, ll> mp;

        for (ll i = n - 1; i >= 0; i--)
        {
            if ((a[i] >= vt[i + 1]) && i < n - 1)
                mp[vt[i]] = mp[vt[i + 1]];
            else
                mp[vt[i]] = i;
        }

        for (ll i = 0; i < n; i++)
            cout << mp[b[i]] << " ";
        cout << endl;
    }

    return 0;
}