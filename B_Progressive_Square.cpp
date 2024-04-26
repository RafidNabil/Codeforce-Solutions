#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
const ll M = 1e9 + 7;
// const ll M = 1e18+7;

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
        ll n, c, d;
        cin >> n >> c >> d;

        ll a[n][n];
        vector<ll> aa;
        vector<ll> aaa;

        for (ll i = 0; i < n * n; i++)
        {
            ll x;
            cin >> x;
            aa.pb(x);
        }

        sort(aa.begin(), aa.end());

        a[0][0] = aa.front();
        ll f = 1;

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                {
                    aaa.pb(a[i][j]);
                    // if (find(aa.begin(), aa.end(), aa.front()) == aa.end())
                    //     f = 0;
                    continue;
                }
                else if (j == 0 && i != 0)
                {
                    a[i][j] = a[i - 1][j] + c;
                    aaa.pb(a[i][j]);
                    // if (find(aa.begin(), aa.end(), a[i][j]) == aa.end())
                    //     f = 0;
                }
                else
                {
                    a[i][j] = a[i][j - 1] + d;
                    aaa.pb(a[i][j]);
                    // if (find(aa.begin(), aa.end(), a[i][j]) == aa.end())
                    //     f = 0;
                }
            }
        }

        sort(aaa.begin(), aaa.end());

        for (ll i = 0; i < n * n; i++)
        {
            if (aa[i] != aaa[i])
            {
                f = 0;
                break;
            }
        }

        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        // for (ll i = 0; i < n; i++)
        // {
        //     for (ll j = 0; j < n; j++)
        //         cout << a[i][j] << " ";
        //     cout << endl;
        // }
    }

    return 0;
}