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

        ll a[n], mx = -1, sum = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];

            mx = max(mx, a[i]);
        }

        for (ll i = 1; i < n; i++)
        {
            int x = max(0, a[i]-a[i-1]);

            sum += x;
        }

        cout << a[0] - 1 + sum << endl;
    }

    return 0;
}