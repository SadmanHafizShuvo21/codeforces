//04 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,f,k;
    std::cin>>n>>f>>k;
    f--;
    k--;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int x = a[f];
    std::sort(a.rbegin(), a.rend());
    if (a[k] > x) {
        std::cout << "NO" << "\n";
    } 
    else if (a[k] < x) {
        std::cout << "YES" << "\n";
    } 
    else {
        std::cout << (k == n - 1 || a[k + 1] < x ? "YES" : "MAYBE") <<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}

