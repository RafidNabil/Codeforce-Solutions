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
        int n, d = 0, e = 1;
        cin >> n;

        vector<int> vt;
        int mat[n][n];
        for (int i = 0; i < n * n; i++)
        {
            if (i % 2 != 0)
            {
                vt.pb((n * n) - d);
                d++;
            }
            else
            {
                vt.pb(e);
                e++;
            }
        }

        int k = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mat[i][j] = vt[k];
                k++;
            }
            if (i % 2 != 0)
            {
                reverse(mat[i], mat[i] + n);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}