//17 Nov 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n,m,L;
    std::cin>>n>>m>>L;
    std::vector<int>l(n),r(n);
    for(int i=0;i<n;i++){
        std::cin>>l[i]>>r[i];
    }
    std::vector<int>x(m),v(m);
    for(int i=0;i<m;i++){
        std::cin>>x[i]>>v[i];
    }
    std::priority_queue<int>pq;
    ll ans=0,pos=1;
    for(int i=0,j=0;i<n;i++){
        while(j<m && l[i]>x[j]){
            pq.push(v[j]);
            j++;
        }
        while(pos<(r[i]-l[i])+2){
            if(pq.empty()){
                std::cout<<-1<<"\n";
                return;
            }
            pos+=pq.top();
            pq.pop();
            ans++;
        }
    }
    std::cout<<ans<<"\n";
    
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while(t--)
    solve();
}



