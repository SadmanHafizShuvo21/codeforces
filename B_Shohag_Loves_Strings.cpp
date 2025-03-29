#include <bits/stdc++.h>
using ll = long long;

void solve(){
    std::string s;
    std::cin>>s;
    ll n=s.size();
    if(n==1){
        std::cout<<-1<<"\n";
    }
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            std::cout<<s.substr(i,2)<<"\n";
            return;
        }
    }
    if(n>=3){
        std::cout<<s.substr(0,3)<<"\n";
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         int n = s.size();
//         if (n == 1) {
//             cout << "-1\n";
//             continue;
//         }
//         bool found = false;
//         for (int i = 0; i < n - 1; ++i) {
//             if (s[i] == s[i+1]) {
//                 cout << s.substr(i, 2) << '\n';
//                 found = true;
//                 break;
//             }
//         }
//         if (found) continue;
//         if (n >= 3) {
//             cout << s.substr(0, 3) << '\n';
//         } else {
//             cout << "-1\n";
//         }
//     }
//     return 0;
// }