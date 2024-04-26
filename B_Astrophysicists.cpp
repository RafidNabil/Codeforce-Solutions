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
        ll n, k, g;
        cin >> n >> k >> g;

        ll total = k * g, gdiv2 = (g % 2 == 1 ? ((g / 2) + 1) : (g / 2)), saved = 0;
        ll req = gdiv2 - 1;

        if (req == 0)
        {
            ll r = total % g;
            if (r >= gdiv2)
                saved += total - (total + (g - r));
            else
                saved += total - (total - r);

            cout << saved << endl;
            continue;
        }

        ll pn = (total % req != 0 ? ((total / req) + 1) : (total / req));

        if (pn < n)
        {
            n = (total / req) + 1;
        }
        else if (pn == n)
        {
            saved = total;
            cout << saved << endl;
            continue;
        }

        saved += (n - 1) * req;

        total -= (n - 1) * req;
        ll r = total % g;
        if (r >= gdiv2)
            saved += total - (total + (g - r));
        else
            saved += total - (total - r);

        cout << saved << endl;
    }

    return 0;
}