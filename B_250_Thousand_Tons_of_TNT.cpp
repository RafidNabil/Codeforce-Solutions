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

        ll a[n + 1], s[n + 1];
        a[0] = 0, s[0] = 0;

        ll mn = INT64_MAX,
           mx = INT64_MIN;

        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
        }

        ll ans = abs(mx - mn);

        for (ll i = 1; i <= n; i++)
            s[i] = a[i] + s[i - 1];

        for (ll i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                mn = INT64_MAX;
                mx = INT64_MIN;
                for (ll j = i; j <= n; j += i)
                {
                    ll sum = s[j] - s[j - i];
                    mx = max(mx, sum);
                    mn = min(mn, sum);
                }

                ans = max(abs(mx - mn), ans);
            }
        }

        cout << ans << endl;
    }

    return 0;
}