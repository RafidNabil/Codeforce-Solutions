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
        ll n, m, k;
        cin >> n >> m >> k;

        ll a[n], b[m];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < m; i++)
            cin >> b[i];

        ll cnt = 0;

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (a[i] + b[j] <= k)
                    cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}