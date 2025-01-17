#include<bits/stdc++.h>
using ll = long long;

void solve() {
    int n;
    std::cin >> n;
    char grid[n][n];
    
    for (int i = 0; i < n; i++) {
        for(int j=0;j<n;j++){
            std::cin>>grid[i][j];
        }
    }
    std::vector<int> p(n,-1);
    for (int i = n - 1; i >= 0; i--) {
        int k = 0;
        for (int j = 0; j < i; j++) {
            k += (grid[j][i] == '1');
        }
        for (int j = 0; j < n; j++) {
            if (p[j] == -1) {
                if (k == 0) {
                    p[j] = i;
                    break;
                }
                k--;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << p[i]+1 << " \n"[i==n-1];
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}
