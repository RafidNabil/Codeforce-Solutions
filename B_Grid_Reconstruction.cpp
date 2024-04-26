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

        int a[2][n];
        a[0][0] = 2 * n;
        a[1][n - 1] = (2 * n) - 1;

        for (int i = 1; i < n; i++)
        {
            if ((i + 1) % 2 == 0)
            {
                a[0][i] = i + 1;
                a[1][i - 1] = i;
            }
            else
            {
                a[0][i] = i+1 + n - 1;
                a[1][i - 1] = i+1 + n - 2;
            }
        }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
                cout << a[i][j] << " ";

            cout << endl;
        }
    }

    return 0;
}