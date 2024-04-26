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

        ll a[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        bool flag = false;

        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i + 1] < a[i])
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << 0 << endl;
            continue;
        }

        ll diff = 999999999;

        for (int i = 0; i < n - 1; i++)
        {
            ll x = a[i + 1] - a[i];

            if (x % 2 == 0)
                x = (x / 2) + 1;
            else
                x = (x / 2) + 1;

            diff = min(x, diff);
        }

        cout << diff << endl;
    }

    return 0;
}