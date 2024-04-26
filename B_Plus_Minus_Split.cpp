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

        stack<char> st;

        for (int i = 0; i < n; i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
                continue;
            }
            if ((st.top() == '+' && s[i] == '-') || (st.top() == '-' && s[i] == '+'))
                st.pop();
            else
                st.push(s[i]);
        }

        cout << st.size() << endl;
    }

    return 0;
}