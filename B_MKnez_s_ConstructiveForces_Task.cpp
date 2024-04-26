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

        if (n == 3)
        {
            cout << "NO" << endl;
            continue;
        }

        if (n % 2 == 0)
        {
            cout << "YES" << endl;

            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    cout << 1 << " ";
                else
                    cout << -1 << " ";
            }
        }
        else
        {
            int x = n / 2;
            int y = x - 1;

            cout << "YES" << endl;

            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                    cout << y << " ";
                else
                    cout << "-" << x << " ";
            }
        }

        cout << endl;
    }

    return 0;
}