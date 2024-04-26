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
        string s;
        cin >> n >> s;

        set<char> uc;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            uc.insert(s[i]);
            ans += uc.size();
        }

        cout << ans << endl;
    }

    return 0;
}