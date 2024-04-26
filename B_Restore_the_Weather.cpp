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

        vector<pair<int, int>> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            a[i].second = i;
            cin >> a[i].first;
        }

        for (int i = 0; i < n; i++)
            cin >> b[i];

        int c[n];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            c[a[i].second] = b[i];
        }

        for (auto i : c)
            cout << i << " ";

        cout << endl;
    }

    return 0;
}