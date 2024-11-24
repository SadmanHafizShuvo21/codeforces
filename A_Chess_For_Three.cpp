//18 May 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int a[3];
    int tsum=0;
    for(int i=0;i<3;i++){
        std::cin>>a[i];
        tsum+=a[i];
    }
    std::sort(a,a+3);
    int tmin=std::min(tsum/2,a[0]+a[1]);
    if(tsum%2==0){
        std::cout<<tmin<<"\n";
    }
    else{
        std::cout<<-1<<"\n";
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