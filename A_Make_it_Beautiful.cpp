#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int t;
    // t = 1;
    cin >> t;

    while (t--)
    {
        ll n, flag = 0;
        cin >> n;

        vector<ll> vt;
        ll x;
        cin >> x;
        vt.pb(x);
        for (int i = 1; i < n; i++)
        {
            cin >> x;
            if (vt[0] != x)
                flag = 1;
            vt.pb(x);
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
            sort(vt.begin()+1, vt.end(), greater());
            for (auto it : vt)
                cout << it << " ";
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}