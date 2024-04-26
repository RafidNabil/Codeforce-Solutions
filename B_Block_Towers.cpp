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
        ll n;
        cin >> n;

        vector<ll> vt;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vt.pb(x);
        }

        sort(vt.begin() + 1, vt.end());

        for (int i = 1; i < n; i++)
        {
            if (vt[i] > vt[0])
            {
                vt[0] += ceil((vt[i] - vt[0] + 1) / 2);
            }
        }

        cout << vt[0] << endl;
    }

    return 0;
}