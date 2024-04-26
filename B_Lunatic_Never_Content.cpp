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
    ll t;
    t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll a[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        

        ll i = 0, j = n - 1;

        vector<ll> v;
        v.pb(0);

        while (i < j)
        {
            v.pb(abs(a[i] - a[j]));
            i++;
            j--;
        }

        ll x = __gcd(v[0], v[1]);

        for (ll i = 2; i < v.size(); i++)
        {
            x = __gcd(x, v[i]);
        }

        cout << x << endl;
    }

    return 0;
}