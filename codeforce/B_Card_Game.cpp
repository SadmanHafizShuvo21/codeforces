//07 Aug 2024
#include <bits/stdc++.h>
using ll = long long;

void solve(){
    int a1,a2,b1,b2;
    std::cin>>a1>>a2>>b1>>b2;
    std::cout<<2*(((a1>b1)+(a2>b2)>(a1<b1)+(a2<b2))+((a1>b2)+(a2>b1)>(a1<b2)+(a2<b1)))<<"\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int tesecase;
    std::cin>>tesecase;
    while(tesecase--)
    solve();
}
