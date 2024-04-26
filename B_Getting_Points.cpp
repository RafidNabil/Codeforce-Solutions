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
        ll n, p, l, t, pt, wwk;
        cin >> n >> p >> l >> t;

        ll weeks = (n % 7 == 0 ? n / 7 : (n / 7) + 1);
        wwk = (weeks % 2 == 0 ? weeks / 2 : (weeks / 2) + 1);
        if (weeks > 1)
        {
            if ((weeks & 1) == 0)
                pt = (wwk * 2 * t) + (wwk * l);
            else
                pt = ((wwk - 1) * 2 * t) + (wwk * l) + t;
        }
        else
        {
            wwk = 1;
            pt = t + l;

            if (pt >= p)
            {
                cout << n - 1 << endl;
                continue;
            }
        }

        if (pt > p)
        {
            ll x = (2 * t) + l;
            cout << n - (p % x == 0 ? p / x : (p / x) + 1) << endl;
            continue;
        }

        ll x = (p - pt);
        ll mwk = (x % l == 0 ? (x / l) : (x / l) + 1);

        cout << n - mwk - wwk << endl;
    }

    return 0;
}