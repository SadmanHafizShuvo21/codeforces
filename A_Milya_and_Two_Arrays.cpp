// #include<bits/stdc++.h>
// using ll = long long;

// void solve() {
//     int n;
//     std::cin >> n;
//     std::set<int>x,y;
//     for (int i = 0; i < n; i++){
//         int a;
//         std::cin >> a;
//         x.insert(a);
//     } 
//     for (int i = 0; i < n; i++){
//         int b;
//         std::cin >> b;
//         y.insert(b);
//     }  
//     if (x.size()>2 || y.size()>2) {
//         std::cout << "YES" << "\n";
//     } 
//     else if(x.size()>1 && y.size()>1){
//         std::cout << "YES" << "\n";
//     }
//     else {
//         std::cout << "NO" << "\n";
//     }
// }

// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     int t;
//     std::cin>>t;
//     while (t--) {
//         solve();
//     }
// }
#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    std::set<int> a,b;
    
    for (int i = 0; i < n; i++){
        int x;
        std::cin >> x;
        a.insert(x);
    } 
    for (int i = 0; i < n; i++){
        int x;
        std::cin >> x;
        b.insert(x);
    }
    int distinct_sums=a.size()*b.size();
    if (distinct_sums > 2) {
        std::cout << "YES" << "\n";
    } 
    else {
        std::cout << "NO" << "\n";
    }
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
