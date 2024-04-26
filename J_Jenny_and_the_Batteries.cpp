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
    // cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        priority_queue<pair<int, int>> indx;
        int a[n], b[n], c[n];

        for (int i = 0; i < n; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;

            indx.push({x, i});
            a[i] = x;
            b[i] = y;
            c[i] = z;
        }

        for(auto i:indx)
        {
            cout<<i.
        }
    }

    return 0;
}