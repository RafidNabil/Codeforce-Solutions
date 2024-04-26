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
        ll n, k, x;
        cin >> n >> k >> x;

        ll a[n] = {0};

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        ll b[n];
        b[0] = a[0];

        for (ll i = 1; i < n; i++)
            b[i] = a[i] + b[i - 1];

        ll pi = (n - 1) - x, sum = b[n - 1], ans = -1, kcnt = 0;

        if (n != x)
            ans = b[pi] - (sum - b[pi]);
        else
            ans = -sum;

        for (ll i = n - 1; i >= 0; i--)
        {
            kcnt++;
            sum -= a[i];
            pi--;
            if (pi < 0)
            {
                ans = max(-sum, ans);
            }
            else
                ans = max(b[pi] - (sum - b[pi]), ans);
            if (kcnt == k)
                break;
        }

        cout << ans << endl;
    }

    return 0;
}