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
    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> v;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.pb(x);
        }

        sort(v.begin(), v.end());

        ll sz = v.size();

        if (sz % 2 == 0)
        {
            ll sum = accumulate(v.begin(), v.end(), 0);

            if (sum % 2 == 0)
            {
                cout << n / 2 << endl;
            }
            else
                cout << n << endl;
        }
        else
        {

            ll e = v.back();
            v.pop_back();

            ll sum = accumulate(v.begin(), v.end(), 0);

            if (sum % 2 == 0 && sum / 2 == e)
            {
                cout << n / 2 << endl;
            }
            else
                cout << n << endl;
        }
    }

    return 0;
}