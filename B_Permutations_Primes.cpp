#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    if(n<=2){
        for(int i=0;i<n;i++){
            std::cout<<i+1<<" \n"[i==n-1];
        }
        return;
    }
    std::vector<int>a(n);
    a[0]=2,a[n-1]=3,a[n/2]=1;

    int x=4;
    for (int i = 0; i < n; i++) {
        if (a[i]==0){
            a[i]=x++;
        }
        std::cout << a[i] << " \n"[i==n-1];
    }
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
