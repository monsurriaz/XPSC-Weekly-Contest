#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll x, y;
    cin >> x >> y;
    int count = 0;
    while (x <= y)
    {
        if (x <= y)
        {
            count++;
        }
        x = 1LL * x * 2;
    }

    cout << count << '\n';
    return 0;
}