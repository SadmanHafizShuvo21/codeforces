//24 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int a[3];
    for(int i=0;i<3;i++){
        std::cin>>a[i];
    }
    std::sort(a,a+3);
    std::cout<<a[2]-a[0]<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int testcase;
    std::cin>>testcase;
    while(testcase--)
    solve();
}

