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
        ll a, b, c, k;
        cin >> a >> b >> c >> k;

        if (a == 1 && b == 1 && c == 1)
        {
            cout << "Brrr" << endl;
        }

        ll aa = pow(10, a - 1);
        ll bb = pow(10, b - 1);
        ll cc = pow(10, c - 1);

        // cout << aa << " " << bb << " " << cc;

        bb = cc - aa;

        aa += k - 1;
        bb -= k - 1;

        cout << aa << " " << bb << " " << cc << endl;
    }

    return 0;
}