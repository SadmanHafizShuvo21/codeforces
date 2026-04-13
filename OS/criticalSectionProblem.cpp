// 13 April 2026
#include <bits/stdc++.h>
#include <thread>
#include <chrono>
#include <atomic>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

std::atomic<bool> flag[2];
std::atomic<int> turn;
ll shared_data = 0;

// Peterson lock
void lock(ll id) {
    ll other = 1 - id;
    flag[id] = true;
    turn = other;

    while (flag[other] && turn == other);
}

// Peterson unlock
void unlock(ll id) {
    flag[id] = false;
}

void process(ll id) {
    for (int i = 0; i < 5; i++) {
        lock(id);
        shared_data++;
        std::cout << "Process " << id  << " updated value to " << shared_data << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        unlock(id);
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
}

void solve() {
    flag[0] = flag[1] = false;
    turn = 0;

    std::thread p1(process, 0);
    std::thread p2(process, 1);

    p1.join();
    p2.join();

    std::cout << "Final shared data = " << shared_data << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}