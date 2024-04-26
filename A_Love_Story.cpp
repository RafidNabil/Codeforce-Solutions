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
        string s;
        cin >> s;

        string t = "codeforces";

        int cnt = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != t[i])
                cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}