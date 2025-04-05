#include <bits/stdc++.h>
using ll = long long;

void solve() {
    ll n ;
    std::cin >> n ;
    std::string str="aeiou";
    std::string word="";
    for(int i=0;i<n;i++){
        word+=str[i%5];
    }
    std::sort(word.begin(),word.end());
    std::cout<<word<<"\n";
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
