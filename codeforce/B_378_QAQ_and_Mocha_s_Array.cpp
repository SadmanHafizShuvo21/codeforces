//02 June 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
      std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    int g = 0;
    for (int i = 1; i < n; i++) {
      if (a[i] % a[0] != 0) {
        g = std::__gcd(g, a[i]);
      }
    }
    bool flag = false;
    for (int i = 1; i < n; i++) {
      if (g % a[i] == 0) {
        flag = true;
        break;
      }
    }
    std::cout << (flag ? "Yes" : "No") << '\n';
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}

