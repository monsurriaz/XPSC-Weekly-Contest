#include <bits/stdc++.h>
using namespace std;

bool checkWord(map<string, bool> &mp, string word)
{
    if (mp.count(word) > 0)
    {
        mp.erase(word);
        return true;
    }
    else
        return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v;
        map<string, bool> mp1, mp2, mp3;

        for(int i=0; i<n; i++)
        {
            string w;
            cin >> w;
            v.push_back(w);
            mp1[w] = 1;
        }
        for(int i=0; i<n; i++)
        {
            string w;
            cin >> w;
            v.push_back(w);
            mp2[w] = 1;
        }
        for(int i=0; i<n; i++)
        {
            string w;
            cin >> w;
            v.push_back(w);
            mp3[w] = 1;
        }

        int cnt1 = 0, cnt2 = 0, cnt3 = 0;

        for (int i = 0; i < v.size(); i++)
        {
            bool first = checkWord(mp1, v[i]);
            bool second = checkWord(mp2, v[i]);
            bool third = checkWord(mp3, v[i]);

            if (first && second && third)
            {
                continue;
            }

            if (first && second)
            {
                cnt1++;
                cnt2++;
            }
            else if (first && third)
            {
                cnt1++;
                cnt3++;
            }
            else if (second && third)
            {
                cnt2++;
                cnt3++;
            }
            else if (first)
                cnt1+=3;
            else if (second)
                cnt2+=3;
            else if (third)
                cnt3+=3;
        }
        cout << cnt1 << " " << cnt2 << " " << cnt3 << '\n';
    }
    return 0;
}
