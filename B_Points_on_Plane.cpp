#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = n;
        long long x = sqrt(n);
        for (long long i = 1; i <= x; i++)
        {
            ans -= i;
        }
        cout << ans << endl;
    }
    return 0;
}
