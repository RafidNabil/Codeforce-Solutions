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
        int n, m;

        cin >> n >> m;

        int a[n][m];

        int ps[m][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }

        for (int i = 0; i < m; i++)
        {
            ps[i][0] = a[0][i];
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                ps[i][j] = ps[i][j - 1] + a[i][j];
            }
        }
    }

    return 0;
}