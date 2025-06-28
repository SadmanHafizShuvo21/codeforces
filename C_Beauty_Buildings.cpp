#include<bits/stdc++.h>
using ll = long long;
const int MOD = 1e9 + 7;

int beauty(const std::string& s) {
    int n = s.size();
    char ch = s[0];
    
    int k = 0;
    while (k < n && s[k] == ch) {
        k++;
    }

    int ans = k;
    int i = k;
    while (i < n) {
        if (s[i] == ch) {
            int l = 0;
            while (i < n && s[i] == ch) {
                l++;
                i++;
            }
            ans = std::max(ans, k + l);
        } 
        else {
            i++;
        }
    }
    
    int mx = 0;
    i = 0;
    while (i < n) {
        int j = i;
        while (j < n && s[j] == s[i]) {
            j++;
        }
        mx = std::max(mx, j - i);
        i = j;
    }
    return std::max(mx, ans);
}
void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::cout << beauty(s) << '\n';
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