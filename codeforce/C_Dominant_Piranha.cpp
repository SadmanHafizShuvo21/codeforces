//12 Aug 2024
#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n,mx=0;
    std::cin >> n;
    std::vector<int>a(n);
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        mx=std::max(mx,a[i]);
    }
    int idx=0;
    for (int i = 0; i < n; i++){
		if (i > 0 && a[i] > a[i - 1] && a[i] == mx){
            idx = i + 1;
            break;
        }
           
		else if (i < n-1 && a[i] > a[i + 1] && a[i] == mx){
            idx = i + 1;
            break;
        }
    }
    if(idx<=0){
        idx=-1;
    }
    std::cout << idx << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();

    return 0;
}
