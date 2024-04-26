// #include <iostream>
// #include <bits/stdc++.h>

// #define pb push_back
// #define mp make_pair
// typedef long long ll;

// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     t = 1;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int a[n], ans = -1;
//         vector<int> vt;

//         for (int i = 0; i < n; i++)
//             a[i] = i + 1;

//         for (int i = n - 1; i >= 0; i--)
//         {
//             int sum = 0;
//             for (int j = i; j < n - 1; j++)
//                 swap(a[j + 1], a[j]);

//             vt.clear();
//             int mx = -1;
//             for (int k = 0; k < n; k++)
//             {
//                 vt.push_back(a[k] * (k + 1));
//                 mx = max(a[k] * (k + 1), mx);
//             }

//             int x = accumulate(vt.begin(), vt.end(), 0) - mx;

//             ans = max(x, ans);
//         }

//         cout << ans << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[1000000000];

    cout << "Hello world";

    return 0;
}