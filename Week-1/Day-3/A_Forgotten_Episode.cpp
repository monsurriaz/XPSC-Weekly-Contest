#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n+1, 0);

    for(int i=1; i<n; i++)
    {
        int a;
        cin >> a;
        v[a]++;
    }

    for(int i=1; i<=n; i++)
    {
        if(v[i] == 0)
        {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}
