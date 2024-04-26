#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
const ll M = 1e9 + 7;
// const ll M = 1e18+7;

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
        ll k;
        cin >> k;

        if (n == k)
        {
            for (ll i = 0; i < n; i++)
                cout << 1 << " ";
            cout << endl;
        }
        else if (k == 1)
        {
            for (ll i = 0; i < n; i++)
                cout << i + 1 << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}