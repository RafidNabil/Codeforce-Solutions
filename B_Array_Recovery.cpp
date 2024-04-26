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

        ll d[n], a[n];

        for (ll i = 0; i < n; i++)
            cin >> d[i];

        a[0] = d[0];
        ll f = 1;

        for (ll i = 1; i < n; i++)
        {
            if (d[i] == 0)
            {
                a[i] = a[i - 1];
                continue;
            }
            if (a[i - 1] + d[i] >= 0 && a[i - 1] - d[i] >= 0)
            {
                f = 0;
                break;
            }
            else
                a[i] = max(a[i - 1] + d[i], a[i - 1] - d[i]);
        }

        if (f)
        {
            for (ll i = 0; i < n; i++)
                cout << a[i] << " ";
        }
        else
            cout << -1;
        cout << endl;
    }

    return 0;
}