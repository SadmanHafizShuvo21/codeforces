#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::string a, b;
    std::cin >> a >> b;
    
    int A = 0, x = 0;
    int B = 0, y = 0;

    for (int i = 0; i < n; i++) {
        if ((i % 2) == 0) { 
            A++;
            if (a[i] == '0'){
                x++;
            } 
        }
    }
    for (int i = 1; i < n; i += 2) { 
        if (b[i] == '0'){
            x++;
        }
    }

    for (int i = 1; i < n; i += 2) { 
        B++;
        if (a[i] == '0'){
            y++;
        } 
    }
    for (int i = 0; i < n; i += 2) { 
        if (b[i] == '0'){
            y++;
        } 
    }
    
    bool ok1 = (x >= A);
    bool ok2 = (y >= B);
    
    std::cout << (ok1 && ok2 ? "YES" : "NO") << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
