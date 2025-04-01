#include<bits/stdc++.h>
using ll = long long;

void solve() {
    ll n;
    std::cin >> n;
    std::string a, b;
    std::cin >> a >> b;
    ll x=0,y=0;
    for(int i=0;i<n;i++){
        if(a[i]=='0'){
            if(i%2==0){
                x++;
            }
            else{
                y++;
            }
        }
        
        if(b[i]=='0'){
            if((i+1)%2==0){
                x++;
            }  
            else{
                y++;
            }
        }
    }
    // std::cout<<x<<" "<<y<<"\n";
    std::cout<<(x>=(n+1)/2 && y>=n/2 ? "YES":"NO")<<"\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
}
