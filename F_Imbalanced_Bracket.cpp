// 22 April 2026
#include <bits/stdc++.h>
using ll = long long;
using lld = long double;
using llx = __int128;
const ll inf = 1e18;
const ll N = 2e5 + 7;
const ll error = 1e-6;

void solve() {
    ll n;
    std::string s;
    std::cin >> n >> s; 
    
    std::stack<char> st;
    for (char c : s) {
        if (c == '(') {
            st.push(c);
        } 
        else {
            if (!st.empty() && st.top() == '(') {
                st.pop();
            } 
            else {
                st.push(c);
            }

        }
    }
    std::cout << (n - st.size()) / 2 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    // solve();
}