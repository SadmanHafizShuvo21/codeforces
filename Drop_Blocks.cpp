#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

class Fenwick {
    int n;
    std::vector<int> bit;

public:
    Fenwick(int sz) : n(sz), bit(sz + 2, 0) {}

    void add(int idx, int delta) {
        while (idx <= n) {
            bit[idx] += delta;
            idx += idx & -idx;
        }
    }

    int sum(int idx) {
        int res = 0;

        while (idx > 0) {
            res += bit[idx];
            idx -= idx & -idx;
        }

        return res;
    }
};

void solve() {
    int n, q;
    std::cin >> n >> q;
    std::vector<int> base(n + 1, 0);
    int MAXV = q + 5;
    Fenwick bit(MAXV);
    std::vector<int> freq(MAXV + 1, 0);
    freq[0] = n;
    bit.add(1, n);

    ll dec = 0, mn = 0;
    while (q--) {
        int type;
        std::cin >> type;

        if (type == 1) {
            int x;
            std::cin >> x;

            int old = base[x], nw = old + 1;
            freq[old]--;
            freq[nw]++;

            bit.add(old + 1, -1);
            bit.add(nw + 1, 1);

            base[x] = nw;
            if (old == mn && freq[old] == 0) {
                while (mn <= MAXV && freq[mn] == 0) {
                    mn++;
                }
            }

            if (mn >= dec + 1) {
                dec++;
            }
        } 
        else {
            int y;
            std::cin >> y;

            int th = y + dec;
            if (th > MAXV) {
                std::cout << 0 << '\n';
            } 
            else {
                int less = bit.sum(th);
                std::cout << n - less << '\n';
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
}