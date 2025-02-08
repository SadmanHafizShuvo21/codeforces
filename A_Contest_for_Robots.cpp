#include<bits/stdc++.h>
using ll = long long int ;

void solve(){
    int n;
    std::cin >> n ;
    
    std::vector<ll> a(n),b(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<n;i++){
        std::cin>>b[i];
    }
    std::vector<int> A, B;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 1 && b[i] == 0) 
        A.push_back(i);
        if (b[i] == 1 && a[i] == 0) 
        B.push_back(i);
    }
    if (A.empty()) {
        std::cout << -1 << "\n";
        return ;
    }

    std::cout << (B.size() / A.size()) + 1 << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
