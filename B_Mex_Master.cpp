#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

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
        ll n;
        cin >> n;
        ll z = 0;

        ll a[n];
        ll mx = -1, mn = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            mx = max(a[i], mx);
            mn = min(a[i], mn);

            if (a[i] == 0)
                z++;
        }

        if (n - z >= z || n - z + 1== z)
        {
            cout << 0 << endl;
        }
        else if (mx != 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}
