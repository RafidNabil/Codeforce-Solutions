#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

ll f(ll x, ll y, ll n)
{
    if (x > n / 2)
        x = n - x + 1;

    if (y >= x && y <= n - x + 1)
        return x;
    else if (y < x)
        return y;
    else if (y > n - x + 1)
        return n - y + 1;

    return 1;
}

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
        ll n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;

        ll c1 = f(x1, y1, n), c2 = f(x2, y2, n);

        cout <<abs(c2-c1)<< endl;
    }

    return 0;
}