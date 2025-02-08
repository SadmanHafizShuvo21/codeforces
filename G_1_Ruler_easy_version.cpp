#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int l = 2, r = 1000;
    while (l < r) {
        int mid = l + (r - l) / 2;
        std::cout << "? 1 " << mid << std::endl;
        std::cout.flush(); 

        int resp; 
        std::cin >> resp;

        if (resp == mid) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    std::cout << "! " << l << std::endl;    
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int testcase;
    std::cin >> testcase;
    while (testcase--) {
        solve();
    }

    return 0;
}
