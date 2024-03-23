#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x;
    cin >> n >> x;
    vector<long long> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != x)
        {
            cout << v[i] << " ";
            ok = false;
        }
    }
    
    if (ok)
        cout << '\n';
    return 0;
}
