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

        priority_queue<int> mx;
        priority_queue<int, vector<int>, greater<int>> mn;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx.push(i + 1);
            mn.push(i + 1);
        }

        int i = 0, j = n - 1;

        bool fnd = false;

        while (i < j)
        {
            int f1 = 0, f2 = 0;
            if (a[i] == mn.top())
            {
                i++;
                mn.pop();
                f1 = 1;
            }
            else if (a[i] == mx.top())
            {
                i++;
                mx.pop();
                f1 = 1;
            }

            if (a[j] == mn.top())
            {
                j--;
                mn.pop();
                f2 = 1;
            }
            else if (a[j] == mx.top())
            {
                j--;
                mx.pop();
                f2 = 1;
            }

            if (f1 == 0 && f2 == 0)
            {
                fnd = true;
                break;
            }
        }

        if (fnd)
            cout << i+1 << " " << j+1 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}