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
        int n, c;
        cin >> n >> c;

        vector<int> v;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v.pb(i + x);
        }

        sort(v.begin(), v.end());

        int s = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s + v[i] <= c)
            {
                cnt++;
                s = s + v[i];
            }
            else
                break;
        }

        cout << cnt << endl;
    }

    return 0;
}