#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        bool c1 = true, c2 = false;

        if (m > n)
        {
            cout << "NO" << endl;
            continue;
        }

        int i = n - 1, j = m - 1;

        while (j > 0)
        {
            if (a[i] != b[j])
            {
                c1 = false;
                break;
            }
            i--;
            j--;
        }

        if (c1 == false)
        {
            cout << "NO" << endl;
            continue;
        }

        while (i >= 0)
        {
            if (b[0] == a[i])
            {
                c2 = true;
                break;
            }
            i--;
        }

        if (c2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}