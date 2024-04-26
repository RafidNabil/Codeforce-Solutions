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
        cout << endl;

        ll x1, x2, x3, y1, y2, y3;

        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        if (x1 == x2)
        {
            if (y1 == y3 || y2 == y3)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else if (x1 == x3)
        {
            if (y2 == y1 || y2 == y3)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else if (x2 == x3)
        {
            if (y1 == y2 || y1 == y3)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}