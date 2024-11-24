//03 Sep 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    std::vector<int>col(n);
    for(int i=0;i<n;i++){
        std::string s;
        std::cin>>s;
        for(int j=0;j<4;j++){
            if(s[j]=='#'){
                col[n-i-1]=j+1;
                break;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        std::cout << col[i] << " \n"[i==n-1];
    }

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