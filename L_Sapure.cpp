// 14 Feb 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll error = 1e-6;

std::pair<ll,ll> wrap(ll x, ll y, ll n) {
    if (x == 0) {
        x = n;
    }
    if (x == n + 1) {
        x = 1;
    }
    if (y == 0) {
        y = n;
    }
    if (y == n + 1) {
        y = 1;
    }
    return {x, y};
}

std::pair<ll,ll> move(ll x, ll y, char dir, ll n) {
    if (dir == 'L') {
        y--;
    }
    if (dir == 'R') {
        y++;
    }
    if (dir == 'U') {
        x--;
    }
    if (dir == 'D') {
        x++;
    }
    return wrap(x, y, n);
}

void solve() {
    ll n, k, m;
    std::string s;
    std::cin >> n >> k >> m >> s;

    std::vector<std::pair<ll,ll>> pr(m);
    for (ll i = 0; i < m; i++) {
        std::cin >> pr[i].first >> pr[i].second;
    }

    std::deque<std::pair<ll,ll>> snake;
    std::set<std::pair<ll,ll>> body;
    snake.push_front({1,1});
    body.insert({1,1});

    ll fx = 0, l = 1;
    for (int i = 0; i < k; i++) {
        auto [x, y] = snake.front();
        auto head = move(x, y, s[i], n);

        bool eat = false;
        if (fx < m && head == pr[fx]) {
            eat = true;
            fx++;
            l++;
        }

        if (!eat) {
            auto tail = snake.back();
            snake.pop_back();
            body.erase(tail);
        }

        if (body.count(head)) {
            std::cout << "DEAD" << "\n";
            return;
        }

        snake.push_front(head);
        body.insert(head);
    }

    std::cout << "ALIVE " << l << "\n";
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
