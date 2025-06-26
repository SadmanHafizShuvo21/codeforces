#include<bits/stdc++.h>
using ll = long long;   

void solve() {
    ll n;
    std::cin >> n;
    while(n != 1) {
        std::cout << n << " ";
        if (n % 2 == 0) {
            n /= 2;
        } 
        else {
            n = (3 * n + 1);
        }
    }
    std::cout << n << "\n";
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}