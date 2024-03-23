#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        char c;
        string s;
        cin >> c >> s;

        int ans = 0, pos = -1;
        int fg = -1;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c && pos == -1)
            {
                pos = i;
            }

            if (s[i] == 'g')
            {
                if (pos == -1 && fg == -1)
                {
                    fg = i;
                }
                else
                {
                    ans = max(ans, i-pos);
                    pos = -1;
                    if (fg == -1)
                    {
                        fg = i;
                    }
                }
            }
        }

        if (pos != -1 && fg != -1)
        {
            fg += s.size();
            ans = max(ans, fg-pos);
        }

        cout << ans << '\n';
    }
    return 0;
}
