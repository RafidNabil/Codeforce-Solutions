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

        string s;
        cin >> s;

        int cnt = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (s[i] == s[i + 2])
                cnt++;
        }

        cout << n - cnt-1 << endl;
    }

    return 0;
}