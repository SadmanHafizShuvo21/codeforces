#include <bits/stdc++.h>
using ll = long long;
std::vector<ll> arr;
std::vector<std::string> ops;

ll min_result(const std::vector<ll>& a, int idx) {
    if (a.size() == 1) {
        return a[0];
    }

    std::string s = ops[idx];
    ll mn = LLONG_MAX;

    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            ll x = (s == "+") ? a[i] + a[j] : a[i] * a[j];
            std::vector<ll> v;
            for (int k = 0; k < a.size(); k++) {
                if (k != i && k != j) {
                    v.push_back(a[k]);
                }
            }
            v.push_back(x);

            ll res = min_result(v, idx + 1);
            mn = std::min(mn, res);
        }
    }
    return mn;
}

void solve() {
    arr.resize(4);
    for (int i = 0; i < 4; i++) {
        std::cin >> arr[i];
    }

    ops.resize(3);
    for (int i = 0; i < 3; i++) {
        std::cin >> ops[i];
    }

    std::cout << min_result(arr, 0) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}