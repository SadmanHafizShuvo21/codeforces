// 13 April 2026
#include <bits/stdc++.h>
#include <thread>
#include <chrono>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

ll shared_id = 0;
void func() {
    ll id = shared_id;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    id++;
    std::cout << id << "\n";
    shared_id = id;
}
void solve() {
    std::vector<std::thread> threads;
    for (int i = 0; i < 5; i++) {
        threads.emplace_back(func);
    }

    for (auto &t : threads) {
        t.join();
    }

    std::cout << "Main thread finished. ID -> " << shared_id << "\n";
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