#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int rem = 4-n.size();
    n.insert(0, rem, '0');

    cout << n << endl;
    return 0;
}
