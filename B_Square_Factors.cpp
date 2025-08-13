#include <bits/stdc++.h>
using ll = long long;
const int N = 100000;

std::vector<ll> cnt(N + 1);
std::vector<ll> v(N + 1);
std::pair<int,int> st[17][N + 1]; 

std::pair<int,int> pr(std::pair<int,int> a, std::pair<int,int> b) {
    if (a.first != b.first) {
        return (a.first > b.first ? a : b);
    }
    return (a.second > b.second ? a : b); 
}

void countDivisor() {
    for (int sq = 1; sq * sq <= N; sq++) {
        int val = sq * sq;
        for (int m = val; m <= N; m += val) {
            cnt[m]++;
        }
    }
    for (int i = 1; i <= N; i++) {
        st[0][i] = {cnt[i], -i};
    }
    for (int k = 1; (1 << k) <= N; k++) {
        for (int i = 1; i + (1 << k) - 1 <= N; i++) {
            st[k][i] = pr(st[k-1][i], st[k-1][i + (1 << (k-1))]);
        }
    }
    v[1] = 0;
    for (int i = 2; i <= N; i++) {
        v[i] = v[i/2] + 1;
    }
}

int query(int l, int r) {
    int len = r - l + 1;
    int k = v[len];
    auto res = pr(st[k][l], st[k][r - (1 << k) + 1]);
    return -res.second;
}

void solve() {
    int l, r;
    std::cin >> l >> r;
    std::cout << query(l, r) << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    countDivisor();

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
