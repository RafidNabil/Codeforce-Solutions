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
        ll n;
        cin >> n;

        map<ll, ll> a;
        map<ll, ll> b;
        ll aa[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> aa[i];

            a[aa[i]]++;
        }

        b[n] = aa[n - 1];

        for (ll i = n - 2; i >= 0; i--)
        {
            if (aa[i] == a[i + 1])
                continue;
            else
            {
                b[i + 1] = aa[i] - aa[i + 1];
            }
        }

        ll f = 1;

        for (ll i = 1; i <= n; i++)
        {
            if (a[i] != b[i])
            {
                f = 0;
                break;
            }
        }

        cout << (f ? "YES" : "NO") << endl;
    }

    return 0;
}