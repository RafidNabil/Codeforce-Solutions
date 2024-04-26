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

        ll a[n], ss;

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ss = a[0];

        for (ll i = 0; i < n; i++)
            ss = (ss & a[i]);

        if (ss != 0)
        {
            cout << 1 << endl;
            continue;
        }

        ll k = a[0], s = 0;

        // for (ll i = 1; i < n; i++)
        // {
        //     if (((a[i] & k) == 0 || i == n-1) && i != n-2)
        //     {
        //         s++;
        //         k = a[i + 1];
        //     }
        // }

        for (ll i = 0; i < n; i++)
        {
            if ((a[i] & k) == 0)
            {
                s++;
                k = a[i + 1];

                if(i == n-1 && a[n-1] != 0)
                i++;
            }
            else
            k = (a[i] & k);
        }

        cout << s << endl;
    }

    return 0;
}