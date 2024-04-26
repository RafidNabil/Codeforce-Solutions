#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;
const int M = 1e9 + 7;
// const ll M = 1e18+7;

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
        int a, b, c;
        cin >> a >> b >> c;

        if (a < b && b < c)
            cout << "STAIR"<<endl;
        else if (a < b && c < b)
            cout << "PEAK" << endl;
        else
            cout << "NONE" << endl;
    }

    return 0;
}