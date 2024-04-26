#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int t;
    t = 1;
    // cin >> t;

    while (t--)
    {
        int n;

        cin >> n;
        pair<int, bool> pr[n];

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            pr[i].first = x;
            pr[i].second = false;
        }

        int collect = 0, i = 0, fw = 1, cd = 0;

        while (collect < n)
        {
            if (pr[i].first <= collect && pr[i].second == false)
            {
                collect++;
                pr[i].second = true;
                if(collect == n)
                break;
            }

            if (fw)
            {
                if (i < n-1)
                    i++;
                else
                {
                    fw = 0;
                    cd++;
                }
            }
            else
            {
                if (i > 0)
                    i--;
                else
                {
                    fw = 1;
                    cd++;
                }
            }
        }
        cout << cd;
    }
    return 0;
}