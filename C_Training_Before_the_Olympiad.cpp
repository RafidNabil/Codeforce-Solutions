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

        ll a[n], cnt = 0, c[n], sum[n] = {0};

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] & 1) == 1)
                cnt++;

            if (i == 0)
                sum[i] = a[i];
            else
                sum[i] = a[i] + sum[i - 1];

            c[i] = cnt;
        }

        for (ll i = 0; i < n; i++)
        {
            if (i == 0)
                cout << a[i] << " ";
            else if (i == 1)
            {
                if (c[i] == 1)
                    cout << sum[i] - 1 << " ";
                else
                    cout << sum[i] << " ";
            }
            else
                cout << sum[i] - ((c[i] / 3) + ((c[i] % 3 == 1 ? 1 : 0))) << " ";
        }
        cout << endl;
    }

    return 0;
}