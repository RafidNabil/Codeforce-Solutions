#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, x;

        cin >> n >> x;

        ll a[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll count = 0;
        ll low = a[0] - x, hi = a[0] + x;

        for (ll i = 1; i < n; i++)
        {
            ll p = a[i] - x, q = a[i] + x;

            if (((p>=low && p<=hi) && (q>=low && q<=hi)) || ((p<low && p<hi) && (q>hi && q>low)))
                continue;
            else if (p >= low && p <= hi && q > hi)
            {
                low = p;
            }
            else if (q >= low && q <= hi && p < low)
            {
                hi = q;
            }
            else
            {
                count++;
                low = a[i] - x;
                hi = a[i] + x;
            }
        }

        cout << count << endl;
    }

    return 0;
}