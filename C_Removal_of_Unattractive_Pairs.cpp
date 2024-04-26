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
        int n;
        cin >> n;

        string s;
        cin >> s;

        stack<char> stq1;

        for (int i = 0; i < n; i++)
        {
            if (stq1.empty() || stq1.top() == s[i])
                stq1.push(s[i]);
            else if (stq1.top() != s[i])
                stq1.pop();
        }

        int sz1 = stq1.size();

        stack<char> stq2;

        for (int i = n - 1; i >= 0; i--)
        {
            if (stq2.empty() || stq2.top() == s[i])
                stq2.push(s[i]);
            else if (stq2.top() != s[i])
                stq2.pop();
        }

        int sz2 = stq2.size();

        cout << min(sz1, sz2) << endl;
    }

    return 0;
}