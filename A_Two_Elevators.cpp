#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, c;

        cin>>a>>b>>c;

        ll d1 = abs(a - 1);
        ll d2 = abs(c - b) + abs(c - 1);

        if (d1 == d2)
            cout << 3 << endl;
        else if (d1 < d2)
            cout << 1 << endl;
        else if (d2 < d1)
            cout << 2 << endl;
    }

    return 0;
}