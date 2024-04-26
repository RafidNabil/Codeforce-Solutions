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
        ll n, m;
        cin >> n >> m;

        ll nn[n], mm[m];

        for (ll i = 0; i < n; i++)
        {
            cin >> nn[i];
        }

        for (ll i = 0; i < m; i++)
        {
            cin >> mm[i];
        }

        ll ns = 0, ms = 0;

        for (ll i = 0; i < n; i++)
        {
            ns += nn[i];
        }

        for (ll i = 0; i < m; i++)
        {
            ms += mm[i];
        }

        if (ns > ms)
            cout << "Tsondu" << endl;
        else if (ms > ns)
            cout << "Tenzing" << endl;
        else
            cout << "Draw" << endl;
    }

    return 0;
}