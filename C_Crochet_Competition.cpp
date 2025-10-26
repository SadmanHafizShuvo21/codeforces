#include <bits/stdc++.h>
using namespace std;
#define dbg(x) cout << #x << " = " << x << '\n';

void solve()
{
    vector<string> day = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun",
                          "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    string dl, dr;
    int hl, ml, hr, mr, dpos;
    char ch;
    cin >> dl >> hl >> ch >> ml >> dr >> hr >> ch >> mr;
    for (int i = 0;; i++)
        if (day[i] == dl)
        {
            dpos = i;
            break;
        }
    int ans = 0;
    while (true)
    {
        if (day[dpos] == dr && hl == hr && ml == mr)
            break;
        ans++;
        ml++;
        if (ml == 60)
            hl++, ml = 0;
        if (hl == 24)
            dpos++, hl = 0;
    }
    if (ans == 0)
    {
        cout << "7 days\n";
        return;
    }

    int d = ans / (24 * 60);
    ans %= (24 * 60);
    if (ans == 0)
    {
        cout << d;
        if (d > 1)
            cout << " days\n";
        else
            cout << " day\n";
        return;
    }
    int h = ans / 60;
    ans %= 60;
    if (ans == 0)
    {
        if (d)
        {
            cout << d;
            if (d > 1)
                cout << " days and ";
            else
                cout << " day and ";
        }
        cout << h;
        if (h > 1)
            cout << " hours\n";
        else
            cout << " hour\n";
        return;
    }

    if (d)
    {
        cout << d;
        if (d > 1)
            cout << " days, ";
        else
            cout << " day, ";
    }
    if (h)
    {
        cout << h;
        if (h > 1)
            cout << " hours, ";
        else
            cout << " hour, ";
    }
    cout << ans;
    if (ans > 1)
        cout << " minutes\n";
    else
        cout << " minute\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}