#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    return (a.first < b.first) && (a.second && b.second);
}

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
        ll n, m, h;
        cin >> n >> m >> h;

        ll a[n][m];
        ll b[n][m];

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        for (ll i = 0; i < n; i++)
        {
            sort(a[i], a[i] + m);
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (j == 0)
                    b[i][j] = a[i][j];
                else
                    b[i][j] = a[i][j] + b[i][j - 1];
            }
        }

        ll s = 0;

        pair<ll, ll> c[n];

        for (ll i = 0; i < n; i++)
        {
            ll s = 0, x = 0;
            for (ll j = 0; j < m; j++)
            {
                if (b[i][j] <= h)
                {
                    s += b[i][j];
                    x++;
                }
                else
                {
                    break;
                }

                c[i].first = x;
                c[i].second = s;
            }
        }

        // sort(c, c + n, cmp);

        ll pos = 1;

        for (ll i = 1; i < n; i++)
        {
            if (c[i].first > c[0].first)
                pos++;
            else if (c[i].first == c[0].first && c[i].second < c[0].second)
            {
                pos++;
            }
        }

        cout << pos << endl;

        // for (ll i = 0; i < n; i++)
        //     cout << c[i].first << " " << c[i].second << endl;
    }

    return 0;
}