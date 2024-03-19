#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool eToO(ll a, ll b)
{
    if ((a%2==0 && b%2==0) || (a%2 !=0 && b%2 !=0))
    {
        return a>b;
    }
    else if (a%2!=0 && b%2==0)
    {
        return a<b;
    }
    else if (a%2==0 && b%2!=0)
    {
        return a<b;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    int oddCnt = 0;
    int oddSmall = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];

        if (v[i] % 2 != 0)
        {
            oddCnt++;
            if (v[i] < oddSmall)
                oddSmall = v[i];
        }
    }

    if (oddCnt%2)
    {
        sum -= oddSmall;
    }

    cout << sum << endl;
    
    return 0;
}
