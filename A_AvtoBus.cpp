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
        ll n, mn, mx;
        cin >> n;

        if ((n % 2 != 0) || n<=2)
            cout << -1 << endl;
        else
        {
            ll a = n / 4, b = n / 6;

            if ((n - 4 * a) % 6 != 0)
            {
                mx = (a - 1) + (n - 4 * (a - 1)) / 6;
            }
            else
                mx = a + (n - 4 * a) / 6;

            if (((n - 6 * b) % 4 != 0))
            {
                mn = (b - 1) + (n - 6 * (b - 1)) / 4;
            }
            else
                mn = b + (n - 6 * b) / 4;

            cout << mn << " " << mx << endl;
        }
    }

    return 0;
}