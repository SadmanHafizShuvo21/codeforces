//01 July 2024
#include<bits/stdc++.h>

using ll = long long;
void solve(){
    std::string s;
    std::cin>>s;
    int four=std::count(s.begin(),s.end(),'4');
    int seven=std::count(s.begin(),s.end(),'7');
    if(four+seven==7 || four+seven==4){
        std::cout<<"YES"<<"\n";
    }
    else{
        std::cout<<"NO"<<"\n";
    }
}
int main(){

    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);std::cout.tie(0);

    solve();


}



