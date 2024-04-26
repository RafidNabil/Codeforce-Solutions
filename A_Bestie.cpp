#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        ll a[n+1] = {0};

        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll x;

        x = gcd(a[0], a[1]);

        for (int i = 2; i < n; i++)
        {
            x = gcd(x, a[i]);
        }

        if (x == 1)
            cout << 0 << endl;
        else if (gcd(x, n) == 1)
            cout << 1 << endl;
        else if (gcd(x, n - 1) == 1)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }

    return 0;
}