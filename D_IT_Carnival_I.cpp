#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

bool check(std::string s) {
    ll r = s.size() - 1, l = 0;
    while(r > l) {
        if (s[l] == s[r]) {
            l++;
            r--;
        }
        else {
            return false;
        }
    }
    return true;
}
void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s; 
    
    if (check(s)) {
        std::cout << "MH and RJ are friends" << "\n";
        return;
    }

    ll ans = 0;
    std::vector<ll> v;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] == s[n - i - 1]) {
            continue;
        }

        ans += std::min(s[i] - 'a', s[n - i - 1] - 'a');
        v.push_back(std::abs(s[i] - s[n - i - 1]));
    }

    ans += (n % 2 == 1 ? s[n/2] - 'a' : 0);
    std::sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i += 2) {
        ans += v[i];
    } 
    std::cout << ans << "\n";   
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // int t;
    // std::cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
}