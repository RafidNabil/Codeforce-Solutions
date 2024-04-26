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
        int n;
        cin >> n;

        int sz = (n * (n - 1)) / 2;

        int a[sz];

        for (int i = 0; i < sz; i++)
            cin >> a[i];

        sort(a, a + sz);

        for (int i = 0; i < sz; i += --n)
            cout << a[i] << " ";
        cout << 1000000000 << endl;
    }

    return 0;
}