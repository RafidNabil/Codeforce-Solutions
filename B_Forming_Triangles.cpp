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

        ll a[n + 1] = {0}, b[n + 1];

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a[x]++;
        }

        b[0] = a[0];
        for (ll i = 1; i <= n; i++)
            b[i] = b[i - 1] + a[i];

        // for (ll i = 0; i <= n; i++)
        //     cout << a[i] << " ";

        // cout << endl;

        // for (ll i = 0; i <= n; i++)
        //     cout << b[i] << " ";

        ll sum = 0;

        for (ll i = 0; i <= n; i++)
        {
            sum += ((a[i] * (a[i] - 1) * (a[i] - 2)) / 6);
            if( i != 0)
            sum += ((a[i] * (a[i] - 1)) / 2) * b[i-1];
        }

        cout << sum << endl;
    }

    return 0;
}