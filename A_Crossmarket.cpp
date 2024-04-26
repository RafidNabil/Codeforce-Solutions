#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        ll r, c;

        cin >> r >> c;

        if(c == 1 && r == 1)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            ll a = (c-1) + (r-1);
            ll b = (min(c, r));

            cout<<a+b<<endl;
        }
    }

    return 0;
}