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

        ll a[n], b[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < n; i++)
            cin >> b[i];

        ll cnt;

        if (a[0] == b[0])
            cnt = 2;
        else
            cnt = 1;

        ll mx = -1;

        for (ll i = 1; i < n; i++)
        {
            if ((a[i] == a[i - 1]) || (b[i] == b[i - 1]) || (a[i] == b[i - 1]) || (b[i] == a[i - 1]))
            {
                cnt++;
                if (a[i] == b[i])
                    cnt++;
            }
            else
            {
                mx = max(mx, cnt);
                if (a[i] == b[i])
                    cnt = 2;
                else
                    cnt = 1;
            }
        }

        mx = max(mx, cnt);

        cout << mx << endl;
    }

    return 0;
}