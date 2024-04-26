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
        int n, m;
        cin >> n >> m;

        vector<int> lzero;
        vector<int> lnzero;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x % 10 == 0)
                lzero.pb(x);
            else
                lnzero.pb(x);
        }

        // for (auto it : lzero)
        //     cout << it << " ";

        // cout << endl;

        // for (auto it : lnzero)
        //     cout << it << " ";

        sort(lzero.begin(), lzero.end(), greater<>());
        sort(lnzero.begin(), lnzero.end(), greater<>());
    }

    return 0;
}