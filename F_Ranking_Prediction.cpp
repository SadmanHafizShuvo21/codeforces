#include <bits/stdc++.h>
using ll = long long;
const ll INF = 1e18;

void solve() {
    int n, a, b, s, t;
    std::cin >> n >> a >> b >> s;

    std::map<char, std::vector<std::pair<int, std::string>>> sub;
    char p;
    std::string v;

    while (s--) {
        std::cin >> t >> p >> v;
        sub[p].emplace_back(t, v);
    }

    int solved = 0;
    ll pen = 0;
    std::vector<ll> frozen;

    for (char ch = 'A'; ch < 'A' + n; ++ch) {
        auto &v = sub[ch];
        int c = 0;
        bool ok = false;
        for (auto &[t, res] : v) {
            if (t < 240) {
                if (res == "ac") {
                    pen += t + 20 * c;
                    ++solved;
                    ok = true;
                    break;
                }
                ++c;
            }
        }
        if (!ok) {
            for (auto &[t, res] : v) {
                if (res == "pd") {
                    frozen.push_back(t + 20 * c);
                    break;
                }
                ++c;
            }
        }
    }

    std::sort(frozen.begin(), frozen.end());
    int res = -1;
    for (int i = 0, cur = solved; i < frozen.size(); ++i) {
        cur++;
        pen += frozen[i];
        if (cur > a || (cur == a && pen < b)) {
            res = i + 1;
            break;
        }
    }
    std::cout << res - 1 << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) solve();
}