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
        ll n, ans = INT64_MAX;
        cin >> n;

        for (ll i = 0; i <= 2; i++)
        {
            for (ll j = 0; j <= 1; j++)
            {
                for (ll k = 0; k <= 4; k++)
                {
                    for (ll l = 0; l <= 2; l++)
                    {
                        ll x = i + j * 3 + k * 6 + l * 10;

                        if (x <= n && (n - x) % 15 == 0)
                            ans = min(ans, i + j + k + l + ((n - x) / 15));
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}