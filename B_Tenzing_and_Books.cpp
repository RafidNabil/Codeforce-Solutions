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
        int n, x;
        cin >> n >> x;

        int a[n];
        int b[n];
        int c[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
            cin >> c[i];

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] | x) != x)
                break;
            ans = (ans | a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if ((b[i] | x) != x)
                break;
            ans = (ans | b[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if ((c[i] | x) != x)
                break;
            ans = (ans | c[i]);
        }

        if (ans == x)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}