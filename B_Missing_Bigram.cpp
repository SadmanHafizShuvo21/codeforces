#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve(){
    ll n;
    std::cin >> n;
    std::vector<std::string> a(n - 2);
    for (int i = 0; i < n - 2; i++) {
        std::cin >> a[i];
    }

    std::string s;
    s += a[0];
    for (int i = 1; i < n - 2; i++) {
        if (s.back() == a[i][0]) {
            s.push_back(a[i][1]);
        }
        else {
            s.push_back(a[i][0]); 
            s.push_back(a[i][1]);
        }
    }

    if (n > s.size()) {
        s.push_back('a');
    }
    std::cout << s << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
    // solve();
}
