//12 Jun 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    ll n;
    std::cin>>n;
    std::cout<<n<<'\n';
    std::vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        p[i] = i + 1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cout<<p[j]<<" ";
        }
        std::cout<<"\n";
        if(i+1<n){
            std::swap(p[i],p[i+1]);
        }
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

