#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
const ll M = 1e9 + 7;
// const ll M = 1e18+7;

using namespace std;

char a[15][15];
vector<pair<ll, ll>> wolf[110];

void f(map<pair<ll, ll>, ll> pig, ll ws, ll i, ll cnt, ll &mx, ll &fl)
{
    if (i == ws)
    {
        fl = 1;
        mx = max(mx, cnt);
        return;
    }

    map<pair<ll, ll>, ll> pig2 = pig;

    for (auto k : wolf[i])
    {
        if (fl == 1)
            break;
        ll p = k.first;
        ll q = k.second;
        if (pig[k] == 0)
        {
            pig[k] = 1;
            pig2[k] = 1;
            f(pig2, ws, i + 1, cnt + 1, mx, fl);
            pig2[k] = 0;
        }
    }

    mx = max(mx, cnt);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt;
    tt = 1;
    // cin >> tt;

    while (tt--)
    {
        ll n, m;
        cin >> n >> m;

        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }

        ll ws = 0;

        for (ll i = 0; i < n + 2; i++)
        {
            for (ll j = 0; j < m + 2; j++)
            {
                int flag = 0;
                if (a[i][j] == 'W')
                {
                    if (a[i + 1][j] == 'P')
                    {
                        wolf[ws].pb({i + 1, j});
                        flag = 1;
                    }
                    if (a[i - 1][j] == 'P')
                    {
                        wolf[ws].pb({i - 1, j});
                        flag = 1;
                    }
                    if (a[i][j + 1] == 'P')
                    {
                        wolf[ws].pb({i, j + 1});
                        flag = 1;
                    }
                    if (a[i][j - 1] == 'P')
                    {
                        wolf[ws].pb({i, j - 1});
                        flag = 1;
                    }
                }

                if (flag)
                    ws++;
            }
        }

        map<pair<ll, ll>, ll> pig;

        ll ps = 0;
        for (ll i = 0; i < n + 2; i++)
        {
            for (ll j = 0; j < m + 2; j++)
            {
                if (a[i][j] == 'P')
                {
                    pig[{i, j}] = 0;
                    ps++;
                }
            }
        }

        ll mx = 0, fl = 0;
        f(pig, ws, 0, 0, mx, fl);
        cout << mx << endl;
    }

    return 0;
}