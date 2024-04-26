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

        ll a[n], fdc = 0, ldc = 0;

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < n; i++)
        {
            if (a[i] == a[0])
                fdc++;
            else
                break;
        }

        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] == a[n - 1])
                ldc++;
            else
                break;
        }

        if (a[0] == a[n - 1])
            cout << max((ll)0, n - (fdc + ldc)) << endl;
        else
            cout << n - max(fdc, ldc) << endl;
    }

    return 0;
}