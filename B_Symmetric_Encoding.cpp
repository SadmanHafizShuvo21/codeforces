#include<bits/stdc++.h>
using ll = long long;
void solve() {
    int n;
    std::cin>>n;
    std::string s;
    std::cin >> s;
    std::string r = s;
    sort(r.begin(), r.end());
    r.erase(unique(r.begin(), r.end()), r.end());
    // std::cout<<r<<"\n";
    std::string result;
    for (char c : s) {
        int index = r.find(c);
        result += r[r.size() - index - 1];
    }
    std::cout << result << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while (testcase--){
        solve();
    }
}