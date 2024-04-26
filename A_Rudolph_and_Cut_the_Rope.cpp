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

        ll s = 0;

        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;

            if (y < x)
                s++;
        }

        cout << s << endl;
    }

    return 0;
}