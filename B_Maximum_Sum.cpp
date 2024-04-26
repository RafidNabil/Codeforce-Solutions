#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
const ll M = 1e9 + 7;
// const ll M = 1e18+7;

using namespace std;

ll power(ll a, ll n)
{
    if (n == 0)
        return 1;
    if (n % 2)
        return power(a, n / 2) * power(a, n / 2) * a;
    else
        return power(a, n / 2) * power(a, n / 2);
}

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
        ll n, k;
        cin >> n >> k;

        ll a[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll mx = a[0], sum = 0, mn_sum = 0;

        for (ll i = 0; i < n; i++)
        {
            sum += a[i];
            mx = max(mx, sum - mn_sum);
            mn_sum = min(mn_sum, sum);
        }

        sum = 0;
        for (ll i : a)
            sum += i;

        mx = (mx < 0 ? 0 : mx);

        ll mxx = 0;

        for (int i = 0; i < k; i++)
        {
            mxx += mx % M;

            mx *= 2;
            mx %= M;
        }

        ll ans = ((sum % M + mxx % M) + M) % M;

        cout << ans << endl;
    }

    return 0;
}