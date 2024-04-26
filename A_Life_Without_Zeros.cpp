#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll removeZero(ll x)
{
    ll res = 0, i = 1;

    while (x != 0)
    {
        if (x % 10 != 0)
        {
            res += (x % 10) * i;
            i *= 10;
        }

        x /= 10;
    }

    return res;
}

int main()
{
    ll a, b, c;

    cin >> a >> b;

    c = a + b;

    a = removeZero(a);
    b = removeZero(b);
    c = removeZero(c);

    if (a + b == c)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}