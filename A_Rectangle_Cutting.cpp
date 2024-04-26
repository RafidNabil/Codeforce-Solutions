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

    while (tt--)
    {
        int n, m;
        cin >> n >> m;

        if (n % 2 == 0 && m % 2 == 1)
        {
            if (n / 2 != m && 2 * m != n)
            {
                cout << "Yes" << endl;
                continue;
            }
        }
        else if (m % 2 == 0 && n % 2 == 1)
        {
            if (m / 2 != n && 2 * n != m)
            {
                cout << "Yes" << endl;
                continue;
            }
        }
        else if (n % 2 == 0 && m % 2 == 0)
        {
            if ((n / 2 != m && 2 * m != n) || (m / 2 != n && 2 * n != m))
            {
                cout << "Yes" << endl;
                continue;
            }
        }

        cout << "No" << endl;
    }
    return 0;
}