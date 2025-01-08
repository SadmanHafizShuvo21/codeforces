#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    ll first=pow((x1-x2),2);
    ll second=pow((y1+y2),2);
    double distance = std::sqrt(first+second);
    std::cout << std::fixed << std::setprecision(10) << distance << '\n';
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}

