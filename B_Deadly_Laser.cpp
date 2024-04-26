#include <iostream>
#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, m, a, b, d;

        cin>>n>>m>>a>>b>>d;

        if(((a+d >= n) && (b+d >= m)) || ((a-d <= 1) && (b-d <= 1)) || ((a+d >= n) && (a-d <= 1)) || ((b+d >= m) && (b-d <= 1)))
        cout<<"-1"<<endl;
        else
        cout<<n+m-2<<endl;
    }
 
    return 0;
}