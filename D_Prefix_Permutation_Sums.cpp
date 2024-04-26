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
        int a[n - 1], b[n];

        for (int i = 0; i < n-1; i++)
        {
            if (i == 0)
            {
                cin >> a[i];
                b[0] = a[0];
            }
            else
            {
                cin >> a[i];
                b[i] = a[i] - a[i - 1];
            }
        }

        b[n - 1] = n;

        sort(b, b + n);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != i + 1)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}