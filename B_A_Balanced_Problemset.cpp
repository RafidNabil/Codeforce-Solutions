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
        ll x, n;
        cin >> x >> n;

        vector<ll> a;

        for (ll i = 1; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                if ((x / i) == i)
                    a.pb(i);
                else
                {
                    a.pb(i);
                    a.pb(x / i);
                }
            }
        }

        sort(a.begin(), a.end(), greater<>());

        for (ll i = 0; i < a.size(); i++)
        {
            if (a[i] * n <= x)
            {
                cout << a[i] << endl;
                break;
            }
        }
    }

    return 0;
}