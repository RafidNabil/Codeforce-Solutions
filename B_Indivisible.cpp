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
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        if (((n * (n + 1)) / 2) % n == 0)
            cout << -1;
        else
        {
            for (int i = 1, j = 2; i <= n && j <= n; i += 2, j += 2)
                cout << j << " " << i << " ";
        }
        cout << endl;
    }

    return 0;
}