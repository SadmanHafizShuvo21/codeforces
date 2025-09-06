#include <bits/stdc++.h>
using ll = long long;
using lld = double;
using llx = __int128;
const lld e = 1e-12L;

void solve() {
    ll h, d;
    std::cin >> h >> d;
    lld area = std::sqrt((lld)3.0) / 3.0L * h * h * std::pow((lld)0.25L, d);
    std::cout.setf(std::ios::fixed); 
    std::cout<<std::setprecision(6)<< (lld)area << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}