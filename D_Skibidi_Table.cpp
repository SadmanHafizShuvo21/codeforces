#include <bits/stdc++.h>
using ll = long long;

ll get_num(int n, int x, int y) {
    if (n == 1) {
        if (x == 1 && y == 1) return 1;
        if (x == 2 && y == 2) return 2;
        if (x == 2 && y == 1) return 3;
        if (x == 1 && y == 2) return 4;
    }

    int len = 1 << (n - 1); 
    ll block = 1LL << (2 * (n - 1)); 

    if (x <= len && y <= len) {
        return get_num(n - 1, x, y); 
    } 
    else if (x > len && y > len) {
        return block + get_num(n - 1, x - len, y - len); 
    } 
    else if (x > len && y <= len) {
        return 2 * block + get_num(n - 1, x - len, y); 
    } 
    else {
        return 3 * block + get_num(n - 1, x, y - len);
    }
}

std::pair<int, int> get_pos(int n, ll d) {
    if (n == 1) {
        if (d == 1) return {1, 1};
        if (d == 2) return {2, 2};
        if (d == 3) return {2, 1};
        if (d == 4) return {1, 2};
    }

    ll block = 1LL << (2 * (n - 1));
    int len = 1 << (n - 1);
    if (d <= block) {
        return get_pos(n - 1, d); 
    } 
    else if (d <= 2 * block) {
        auto [x, y] = get_pos(n - 1, d - block);
        return {x + len, y + len}; 
    } 
    else if (d <= 3 * block) {
        auto [x, y] = get_pos(n - 1, d - 2 * block);
        return {x + len, y}; 
    } 
    else {
        auto [x, y] = get_pos(n - 1, d - 3 * block);
        return {x, y + len}; 
    }
}

void solve() {
    int n, q;
    std::cin >> n >> q;
    while (q--) {
        std::string type;
        std::cin >> type;
        if (type == "->") {
            int x, y;
            std::cin >> x >> y;
            std::cout << get_num(n, x, y) << '\n';
        } 
        else {
            ll d;
            std::cin >> d;
            auto [x, y] = get_pos(n, d);
            std::cout << x << ' ' << y << '\n';
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
