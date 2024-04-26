#include <iostream>
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
typedef long long ll;

using namespace std;

int main()
{
    ll a, b, c;

    cin>>a>>b>>c;

    cout << (c * 2) + (a > b ? b * 2 : a * 2) + (a != b ? 1 : 0);

    return 0;
}