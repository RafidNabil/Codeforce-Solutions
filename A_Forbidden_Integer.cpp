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
        int n, k, x;
        cin >> n >> k >> x;

        if (k == 1 && x == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        if (k == x)
            k = k - 1;

        int i;

        if (x == 1)
            i = 2;
        else
            i = 1;

        int f = 0;
        for (; i <= k; i++)
        {
            if (n % i != x)
            {
                f = 1;
                cout << "YES" << endl;

                if (n % i == 0)
                {
                    cout << n / i << endl;
                    for (int j = 0; j < n / i; j++)
                        cout << i << " ";
                    cout << endl;
                }
                else
                {
                    cout << (n / k) + 1 << endl;
                    for (int j = 0; j < n / i; j++)
                        cout << i << " ";
                    cout << n % i << endl;
                }
                break;
            }
        }

        if (f == 0)
            cout << "NO" << endl;
    }

    return 0;
}