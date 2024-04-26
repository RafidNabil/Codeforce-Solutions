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
        n--;

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> ans;

        ans.pb(a[0]);

        for (int i = 0; i < n - 1; i++)
            ans.pb(min(a[i], a[i + 1]));

        ans.pb(a[n - 1]);

        for (int i : ans)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}