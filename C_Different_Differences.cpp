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

        if (n == k)
        {
            for (int i = 0; i < n; i++)
                cout << i + 1 << " ";
            cout << endl;
            continue;
        }

        vector<int> v(k + 1, 0);
        vector<int> ans;
        ans.pb(1);

        int j = 1, pv = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (pv + j <= k)
            {
                ans.pb(pv + j);
                v[pv + j] = 1;
                pv = pv + j;
                j++;
            }
            else
                break;
        }

        if (ans.size() < n)
        {
            int x = n - ans.size();
            int cnt = 0;

            for (int i = k; i >= 1; i--)
            {
                if (v[i] != 1)
                {
                    ans.pb(i);
                    cnt++;
                }

                if (cnt == x)
                    break;
            }
        }

        sort(ans.begin(), ans.end());

        for (auto i : ans)
            cout << i << " ";

        cout << endl;
    }

    return 0;
}