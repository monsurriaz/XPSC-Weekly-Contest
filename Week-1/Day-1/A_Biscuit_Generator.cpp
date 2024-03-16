#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    float t;
    cin >> a >> b >> t;
    t += 0.5;

    int round = t / a;
    cout << round*b << endl;
    return 0;
}