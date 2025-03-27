#include<bits/stdc++.h>
using ll = long long;

// 01 03 2025 sorted 00012235

void solve(){
    ll n;
    std::cin>>n;
    std::map<ll,ll>mp;
    ll ans=0;
    for(int i=0;i<n;i++){
        ll x;
        std::cin>>x;
        mp[x]++;
        if(mp[0]>=3 && mp[1]>=1 && mp[2]>=2 && mp[3]>=1 && mp[5]>=1 && ans==0){
            ans=i+1;
        }
    }
    std::cout<<ans<<"\n";
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
}

// Contest submittion
// #include <bits/stdc++.h>
// using ll = long long;

// const std::string TARGET = "01032025";

// void solve() {
//     int n;
//     std::cin >> n;
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
    
//     std::unordered_map<char, int> count;
//     for (char c : TARGET) {
//         count[c]++;
//     }
    
//     std::unordered_map<char, int> mp;
//     int ans = 0;
//     for (int i = 0; i < n; i++) {
//         char c = '0' + a[i];
//         if (count.count(c)) {
//             mp[c]++;
//             if (mp[c] <= count[c]) {
//                 ans++;
//             }
//         }
//         if (ans == 8) {
//             std::cout << (i + 1) << "\n";
//             return;
//         }
//     }
//     std::cout << "0"<<"\n";
// }

// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
    
//     int t;
//     std::cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }