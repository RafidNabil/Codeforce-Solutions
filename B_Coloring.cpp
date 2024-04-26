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
        ll n, m, k;
        cin >> n >> m >> k;

        ll grp = (n / k) + (n % k != 0);

        bool flag = true;

        ll cnt = 0;

        for (ll i = 0; i < m; i++)
        {
            ll a;
            cin >> a;

            if(a>grp)
            flag = false;
            if (a > n / k)
                cnt += a - (n / k);
            if (cnt > n % k)
            {
                flag = false;
            }
        }

        if (m < k)
            flag = false;

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}