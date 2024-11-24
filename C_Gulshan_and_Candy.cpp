//24 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    std::vector<int>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::sort(a.begin(),a.end());
    int maxCandies = 0;
        for (int i = 0; i < n; i++) {
            int cnt = 1;
            for (int j = i + 1; j < n; ++j) {
                if (a[j] - a[i] <= 1) {
                    cnt++;
                } 
                else {
                    break;
                }
            }
            maxCandies = std::max(maxCandies, cnt);
        }
    std::cout << maxCandies <<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}


