//23 Nov 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n;
    std::cin>>n;
    ll people_waiting = 0,b;
    for(int i=0;i<n;i++){
        std::string s;
        std::cin>>s;
        if(s=="P"){
            int x;
            std::cin>>x;
            people_waiting+=x;
        }
        else if(s=="B"){
            std::cin>>b;
            if (b > people_waiting) {
                std::cout << "YES\n"; 
            } 
            else {
                std::cout << "NO\n";
            }
            people_waiting = std::max(0LL, people_waiting - b);
        }
        
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
