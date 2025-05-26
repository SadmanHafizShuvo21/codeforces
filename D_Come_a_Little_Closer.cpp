#include <bits/stdc++.h>
using ll = long long;

struct Point {
    ll x, y;
};

ll compute_area(ll min_x, ll max_x, ll min_y, ll max_y) {
    return (max_x - min_x + 1) * (max_y - min_y + 1);
}

void solve() {
    int n;
    std::cin >> n;
    std::vector<Point> points(n);
    std::vector<ll> x(n), y(n);
    for (int i = 0; i < n; i++) {
        std::cin >> points[i].x >> points[i].y;
        x[i] = points[i].x;
        y[i] = points[i].y;
    }

    if (n == 1) {
        std::cout << 1 << '\n';
        return;
    }

    std::vector<ll> sx = x, sy = y;
    std::sort(sx.begin(), sx.end());
    std::sort(sy.begin(), sy.end());

    ll min_x = sx[0], max_x = sx.back();
    ll min_y = sy[0], max_y = sy.back();

    int cnt_min_x = std::upper_bound(sx.begin(), sx.end(), min_x) - std::lower_bound(sx.begin(), sx.end(), min_x);
    int cnt_max_x = std::upper_bound(sx.begin(), sx.end(), max_x) - std::lower_bound(sx.begin(), sx.end(), max_x);
    int cnt_min_y = std::upper_bound(sy.begin(), sy.end(), min_y) - std::lower_bound(sy.begin(), sy.end(), min_y);
    int cnt_max_y = std::upper_bound(sy.begin(), sy.end(), max_y) - std::lower_bound(sy.begin(), sy.end(), max_y);

    ll ori = compute_area(min_x, max_x, min_y, max_y), res = ori;

    for (auto [px, py] : points) {
        ll nminx = (px == min_x && cnt_min_x == 1 ? sx[1] : min_x);
        ll nmaxx = (px == max_x && cnt_max_x == 1 ? sx[n - 2] : max_x);
        ll nminy = (py == min_y && cnt_min_y == 1 ? sy[1] : min_y);
        ll nmaxy = (py == max_y && cnt_max_y == 1 ? sy[n - 2] : max_y);

        ll a = compute_area(nminx, nmaxx, nminy, nmaxy);
        ll rest = n - 1;
        ll cur;
        if (a > rest) {
            cur = a;
        } else {
            ll op1 = (nmaxx - nminx + 2) * (nmaxy - nminy + 1);
            ll op2 = (nmaxx - nminx + 1) * (nmaxy - nminy + 2);
            cur = std::min(op1, op2);
        }
        res = std::min(res, cur);
    }

    std::cout << std::min(ori, res) << '\n';
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
