#include<bits/stdc++.h>
using ll = long long;
using lld = long double;
const ll inf = 1e18;

void solve() {
    std::string s;
    std::cin >> s;
    
    std::vector<char> arr;
    ll n = s.size();
    for (int i = 0; i < n; ) {
        if (i + 1 < n && s[i] == '\\' && s[i + 1] == '0') {
                arr.push_back('\0');
                i += 2;
            } 
            else {
                arr.push_back(s[i]);
                i += 1;
            }
        }

        ll sz = arr.size() + 1, sl = 0;
        while (sl < arr.size() && arr[sl] != '\0') {
            sl++;
        }

    std::cout << sz << " " << sl << "\n";
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
