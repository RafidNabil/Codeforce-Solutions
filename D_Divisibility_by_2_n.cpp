#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
const ll M = 1e9 + 7;
// const ll M = 1e18+7;

using namespace std;

ll num2(ll n)
{
    ll cnt = 0;
    while (n % 2 == 0)
    {
        cnt++;
        n /= 2;
    }

    return cnt;
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
        ll n;
        cin >> n;

        ll a[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll cnt = 0;

        for (ll i = 0; i < n; i++)
            cnt += num2(a[i]);

        if (cnt >= n)
        {
            cout << 0 << endl;
            continue;
        }

        ll stp = 0;

        vector<int> vt;

        for (int i = 1; i <= n; i++)
        {
            vt.pb(num2(i));
        }

        sort(vt.begin(), vt.end(), greater<>());

        for (auto i = vt.begin(); i != vt.end(); i++)
        {
            if (cnt < n)
            {
                stp++;
                cnt += *i;
            }
            else
                break;
        }

        if (cnt >= n)
            cout << stp << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}