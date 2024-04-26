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

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> v;

        for (int i = 0; i < n - 1; i++)
            v.pb(abs(a[i + 1] - a[i]));

        sort(v.begin(), v.end());

        for (int i = 0; i < k - 1; i++)
            v.pop_back();

        int s = 0;

        for (auto i = v.begin(); i != v.end(); i++)
            s += *i;

        cout << s << endl;
    }

    return 0;
}