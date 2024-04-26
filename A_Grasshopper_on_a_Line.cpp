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
        int n, k;
        cin >> n >> k;

        if (n % k != 0)
        {
            cout << 1 << endl;
            cout << n << endl;
        }
        else
        {
            cout << 2 << endl;
            cout << n - k + 1 << " " << n - (n - k + 1) << endl;
        }
    }

    return 0;
}