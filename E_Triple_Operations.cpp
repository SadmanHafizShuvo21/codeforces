#include <bits/stdc++.h>
using ll = long long;

const int MAX = 2e5 + 10;
int ops[MAX], prefix[MAX + 1];

void precompute() {
    for (int i = 0; i < MAX; i++) {
        int x = i;
        while (x > 0) {
            x /= 3;
            ops[i]++;
        }
        prefix[i + 1] = prefix[i] + ops[i];
    }
}

void solve() {
    int l, r;
    std::cin >> l >> r;
    std::cout << prefix[r + 1] - prefix[l] + ops[l] << '\n';
    
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    precompute();

    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
}
