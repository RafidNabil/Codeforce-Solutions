#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

ll sumN(ll n)
{
    return (n * (n + 1)) / 2;
}

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
        ll n, x, y;
        cin >> n >> x >> y;   

        ll cc = n/lcm(x, y);


        ll xc = (n / x) - cc, yc = (n / y) - cc;

        ll ans = (sumN(n) - sumN(n - xc)) - sumN(yc);

        cout << ans << endl;
    }

    return 0;
}
