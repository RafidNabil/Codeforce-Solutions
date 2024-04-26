#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>

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

        vector<int> d;
        set<int> ds;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (i != x)
            {
                ds.insert(abs(i - x));
            }
        }

        if (ds.size() == 1)
        {
            cout << *ds.begin() << endl;
            continue;
        }

        for (auto i = ds.begin(); i != ds.end(); i++)
            d.pb(*i);

        int ans = __gcd(*d.begin(), *(d.begin() + 1));

        for (auto i = d.begin() + 2; i != d.end(); i++)
            ans = __gcd(ans, *i);

        cout << ans << endl;
    }

    return 0;
}