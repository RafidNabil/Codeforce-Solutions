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
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (x1 + y2-y1 < x2 || y1 > y2)
        {
            cout << -1 << endl;
        }
        else
        {
            int p = y2 - y1;
            int q = (x1 + p) - x2;
            cout << p + q << endl;
        }
    }

    return 0;
}