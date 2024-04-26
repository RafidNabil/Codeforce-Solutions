#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    ll n, rsolve = 0, bsolve = 0;

    cin >> n;

    vector<int> r, b;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        r.pb(x);
        if (x == 1)
            rsolve++;
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.pb(x);

        if (x == 1)
            bsolve++;
    }

    ll solved = 0;
    for (int i = 0; i < n; i++)
    {
        if (r[i] == 1 && b[i] == 0)
            solved++;
    }

    ll gain = bsolve - rsolve;

    if (gain < 0)
        cout << 1;
    else if (solved == 0)
        cout << -1;
    else
    {
        if ((gain + 1) % solved == 0)
        {
            cout << ((gain + 1) / solved) + 1;
        }
        else
        {
            cout << ((gain + 1) / solved) + 2;
        }
    }

    return 0;
}