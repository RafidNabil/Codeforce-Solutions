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
        ll n, a, b;
        cin >> n >> a >> b;

        if (b > 2 * a)
        {
            cout << n * a << endl;
        }
        else
        {
            cout << (n / 2) * b + (n % 2) * a << endl;
        }
    }

    return 0;
}