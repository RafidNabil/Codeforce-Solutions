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
    int tt;
    tt = 1;
    cin >> tt;

    vector<int> pairs[1001];

    for (int i = 1; i < 1001; i++)
    {
        for (int j = 1; j < 1001; j++)
        {
            if (__gcd(i, j) == 1)
            {
                pairs[i].pb(j);
            }
        }
    }

    while (tt--)
    {
        int n;
        cin >> n;

        map<int, int> a;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[x] = i;
        }

        int mx = -1;

        for (auto i : a)
        {
            for (auto ii : pairs[i.first])
            {
                if (a.find(ii) != a.end())
                    mx = max(mx, (a[ii] + a[i.first] + 2));
            }
        }

        cout << mx << endl;
    }

    return 0;
}