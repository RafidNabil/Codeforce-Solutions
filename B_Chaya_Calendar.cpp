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

        ll a[n];

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll yr = a[0];

        for (ll i = 1; i < n; i++)
        {
            ll x = yr % a[i];
            yr = (a[i] - x) + yr;
        }

        cout << yr << endl;
    }

    return 0;
}