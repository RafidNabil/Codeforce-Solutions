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

        ll a[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll ans = a[0], sum = max((ll) 0, a[0]);

        for (ll i = 1; i < n; i++)
        {
            if (abs(a[i]) % 2 != abs(a[i - 1]) % 2)
            {
                sum += a[i];
                ans = max(ans, sum);
                sum = max(sum, (ll)0);
            }
            else
            {
                sum = a[i];
                ans = max(ans, sum);
                sum = max((ll)0, sum);
            }
        }

        cout << ans << endl;
    }

    return 0;
}