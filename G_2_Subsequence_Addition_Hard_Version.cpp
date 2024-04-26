#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int dp(int n, int mem[])
{
    if(n == 1)
    {
        
    }
}

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
        int a[n + 1];
        int memo[n];
        memset(memo, -1, sizeof(memo));
        a[0] = 0;

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        sort(a, a + n + 1);


    }

    return 0;
}
