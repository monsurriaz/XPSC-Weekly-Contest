#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int i = 1;
    int tmp = c;
    bool ans = false;

    while (tmp <= 1000)
    {
        tmp = c * i;
        if (tmp >= a && tmp <= b)
        {
            cout << tmp << endl;
            ans = true;
            break;
        }
        i++;
    }

    if (!ans)
        cout << -1 << endl;
    return 0;
}
