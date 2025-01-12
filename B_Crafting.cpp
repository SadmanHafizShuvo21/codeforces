#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    
    int i = 0;
    while (i < n && a[i] >= b[i]) {  
        i++;
    }
    
    if (i == n) {
        std::cout << "YES"<<"\n";
        return;
    }
    
    for (int j = 0; j < n; j++) {
        if (j != i && a[j] - (b[i] - a[i]) < b[j]) {
            std::cout << "NO"<<"\n";
            return;
        }
    }
    std::cout << "YES"<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

