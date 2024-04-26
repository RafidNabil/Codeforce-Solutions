#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0, ans = 0;
    for (int i = 0; i < n;)
    {
        if (a[i] == 1 && a[i + 1] == 0 && a[i + 2] == 1)
        {
            count++;
            i += 2;
        }
        else
        {
            if (count == 1)
                ans++;
            else if (count > 1)
            {
                if (count % 2 == 0)
                    ans += (count / 2);
                else
                    ans += ((count / 2) + 1);
            }
            count = 0;
            i++;
        }
    }

    cout << ans;

    return 0;
}