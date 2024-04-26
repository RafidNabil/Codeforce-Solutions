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

        set<char> st;

        for (int i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
        }

        if (st.size() == 1)
            cout << -1 << endl;
        else
            cout << s.size() - 1 << endl;
        
    }

    return 0;
}