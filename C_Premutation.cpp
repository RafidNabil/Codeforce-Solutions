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
        int n;
        cin >> n;

        int a[n][n - 1];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
                cin >> a[i][j];
        }

        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            m[a[i][0]]++;
        }

        int x, y;

        for (auto i : m)
        {
            if (i.second == 1)
            {
                x = i.first;
                break;
            }
        }

        for (auto i : m)
        {
            if (i.first != x)
            {
                y = i.first;
                break;
            }
        }

        int xi;
        for (int i = 0; i < n; i++)
        {
            if (a[i][0] == x)
            {
                xi = i;
                break;
            }
        }

        vector<int> ans;
        ans.pb(y);

        for (int i = 0; i < n - 1; i++)
        {
            ans.pb(a[xi][i]);
        }

        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}