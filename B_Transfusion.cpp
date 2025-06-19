#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin>>n;

    ll os = 0, o = 0, es = 0, e = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        ll a;
        std::cin >> a;
        if (i % 2 == 0) {
            os += a;
            o++;
        }
        else {
            es += a;
            e++;
        }
        sum += a;
    }
     
    if (sum % n != 0) {
        std::cout << "NO" << "\n";
        return;
    }
    
    std::cout<<(os / o == es / e ? "YES" : "NO")<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--) {
        solve();
    }
}
