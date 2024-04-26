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

        ll a[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll f2 = 0;

        for (ll i = 0; i < n - 2; i++)
        {
            if (a[i] * 2 > a[i + 1] || a[i] > a[i + 2] || a[i] < 0)
            {
                f2 = 1;
                break;
            }

            a[i + 1] -= a[i] * 2;
            a[i + 2] -= a[i];
            a[i] -= a[i];
        }

        if (f2)
        {
            cout << "NO" << endl;
            continue;
        }

        ll f = 1;

        for (ll i = 0; i < n; i++)
        {
            if (a[i] != 0)
                f = 0;
        }

        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}