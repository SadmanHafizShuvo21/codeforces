#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::string s;
    std::cin >> n >> s;

    std::vector<int> arr(n);
    int l = 1, r = n;

    for (int i = n - 1; i >= 1; i--) {
        if (s[i - 1] == '<') {
            arr[i] = l++;
        } 
        else {
            arr[i] = r--;
        }
    }
    arr[0] = l;  

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " \n"[i == n - 1];
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
