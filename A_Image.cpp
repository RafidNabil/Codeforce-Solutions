#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a[27] = {0};
        for (int i = 0; i < 4; i++)
        {
            char c;
            cin >> c;

            a[c - 96]++;
        }

        int o = 0, t = 0, th = 0, f = 0;
        for (int i = 1; i < 27; i++)
        {
            if (a[i] == 1)
                o++;
            else if (a[i] == 2)
                t++;
            else if (a[i] == 3)
                th++;
            else if (a[i] == 4)
                f++;
        }

        if (o == 4)
            cout << 3 << endl;
        else if (t == 1 && o == 2)
            cout << 2 << endl;
        else if (t == 2)
            cout << 1 << endl;
        else if (th == 1 && o == 1)
            cout << 1 << endl;
        else if (f == 1)
            cout << 0 << endl;
    }

    return 0;
}