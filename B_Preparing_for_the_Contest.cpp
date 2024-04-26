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
        cin >> n>> k;

        for (int i = n - k; i >= 1; i--)
            cout << i << " ";

        for (int i = n - k + 1; i <= n; i++)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}