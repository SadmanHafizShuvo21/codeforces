#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
const int mod = 1e9 + 7;
const ld pi = acosl(-1.0);

void solve(){
    int n;
    std::cin >> n;
    std::vector<int> dp(n + 1);

    for (int i = 1; i <= n; i++){
        std::cout << "? " << i << " " << n;
        for (int j = 1; j <= n; j++)
            std::cout << " " << j;
        std::cout << std::endl;
        std::cout.flush();

        int ans;
        std::cin >> ans;
        if (ans == -1)
            exit(0);
        dp[i] = ans;
    }

    int l = 0;
    for (int i = 1; i <= n; i++)
        l = std::max(l, dp[i]);

    std::vector<int> st;
    for (int i = 1; i <= n; i++)
        if (dp[i] == l)
            st.push_back(i);
    std::sort(st.begin(), st.end());

    int s = st[0];
    std::vector<int> path{s};
    int cur = s, lvl = l;

    while (lvl > 1){
        std::vector<int> c;
        for (int j = 1; j <= n; j++)
            if (dp[j] == lvl - 1)
                c.push_back(j);

        int nxt;
        if (c.size() == 1){
            nxt = c[0];
        }
        else{
            auto tmp = c;
            while (tmp.size() > 1){
                int mid = tmp.size() / 2;
                std::vector<int> d(tmp.begin(), tmp.begin() + mid);

                std::cout << "? " << cur << " " << (d.size() + 1) << " " << cur;
                for (int x : d)
                    std::cout << " " << x;
                std::cout << std::endl;
                std::cout.flush();

                int ans;
                std::cin >> ans;
                if (ans == -1)
                    exit(0);
                if (ans == 2)
                    tmp = d;
                else
                    tmp = std::vector<int>(tmp.begin() + mid, tmp.end());
            }
            nxt = tmp[0];
        }
        path.push_back(nxt);
        cur = nxt;
        lvl--;
    }

    std::cout << "! " << path.size();
    for (int x : path)
        std::cout << " " << x;
    std::cout << "\n";
    std::cout.flush();
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--)
        solve();
}
