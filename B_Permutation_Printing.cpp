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
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
            a[i] = i + 1;

        // for (int i = 0, j = n - 1; i <= j; i++, j--)
        // {
        //     if (i == j)
        //     {
        //         cout << a[i] << " ";
        //         continue;
        //     }
        //     if (i % 2 == 1)
        //         cout << a[j] << " " << a[i] << " ";
        //     else if (i % 2 == 0)
        //         cout << a[i] << " " << a[j] << " ";
        // }

        for (int i = 0, j = n - 1; i <= j; i++, j--)
        {
            if (i == j)
            {
                cout << a[i] << " ";
            }
            else
                cout << a[i] << " " << a[j] << " ";
        }

        cout << endl;
    }

    return 0;
}