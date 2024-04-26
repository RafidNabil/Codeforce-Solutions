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

        vector<int> o, e;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x % 2 == 0)
                e.pb(x);
            else
                o.pb(x);
        }

        if (e.size() == 0 || o.size() == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        sort(e.begin(), e.end());
        sort(o.begin(), o.end());

        if (*(o.begin()) < *(e.begin()))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}