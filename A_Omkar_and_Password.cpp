#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;

        cin >> n;

        ll a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int flag = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
            cout << 1 << endl;
        else
            cout << n << endl;
    }

    return 0;
}