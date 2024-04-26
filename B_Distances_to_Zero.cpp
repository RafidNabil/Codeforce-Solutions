#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    ll n;

    cin >> n;

    vector<ll> v;
    vector<ll> zv;

    for (ll i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
            zv.push_back(i);

        v.push_back(x);
    }

    ll i = -1;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        int x = it - v.begin();

        if (x < zv.front())
            cout << zv.front() - x << " ";
        else if (x > zv.back())
            cout << x - zv.back() << " ";
        else
        {
            if ((*it) == 0)
                {
                    i++;
                    cout<<0<<" ";
                    continue;
                }

            ll p = (*(zv.begin() + i));
            ll q = (*(zv.begin() + 1 + i));

            cout << min(q - x, x - p) << " ";
        }
    }
    return 0;
}