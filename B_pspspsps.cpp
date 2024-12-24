// 22 Dec 2024
#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int p = s.find('p');
    if (p == -1){
        std::cout << "YES\n";
        return;
    }
    if (s.find('s', p) != -1){
        std::cout << "NO\n";
        return;
    }
    bool isCondition = p>0 && p<n-1;
    bool hasInRange = false;
    for (int i = 1; i < p; ++i){
        if (s[i] == 's'){
            hasInRange = true;
            break;
        }
    }
    if (isCondition && hasInRange){
        std::cout << "NO\n";
    }
    else{
        std::cout << "YES\n";
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