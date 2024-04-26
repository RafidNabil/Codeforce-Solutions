#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{

    ll n;

    cin >> n;

    vector<ll> vt;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        vt.pb(x);
    }

    sort(vt.begin(), vt.end());

    for (auto i = vt.begin(); i != vt.end() - 2; i++)
    {
        ll x = *i, y = *(i + 1), z = *(i + 2);

        if ((x + y > z) && (x + z > y) && (y + z > x))
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}