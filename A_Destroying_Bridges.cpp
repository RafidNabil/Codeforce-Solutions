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
        int n, k;
        cin >> n >> k;

        if (k >= n - 1)
            cout << 1 << endl;
        else
            cout << n << endl;
    }

    return 0;
}