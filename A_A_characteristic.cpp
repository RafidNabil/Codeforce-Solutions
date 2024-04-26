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
        int n, k;
        cin >> n >> k;

        bool can = false;

        int x;
        for (x = 1; x <= n; x++)
        {
            if ((x * (x - 1) / 2) + ((n - x) * (n - x - 1) / 2) == k)
            {
                can = true;
                break;
            }
        }

        if (can)
        {
            cout << "YES" << endl;
            for (int i = 0; i < x; i++)
                cout << 1 << " ";

            for (int i = 0; i < n - x; i++)
                cout << -1 << " ";

            cout << endl;
        }
        else
                cout
            << "NO" << endl;
    }

    return 0;
}