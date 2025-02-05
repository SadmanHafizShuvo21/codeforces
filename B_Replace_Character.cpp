#include<bits/stdc++.h>
using ll = long long int;

void solve() {
    int n;
    std::string s;
    std::cin >> n >> s;
    std::vector<int> ch(26);
    for(int i=0; i<n; i++){
        ch[s[i] - 'a']++;
    }
        
    std::pair<std::pair<int,char>,int> st, end;
    st = end = {{ch[s[0] - 'a'], s[0]}, 0};
    for(int i=1; i<n; i++) {
        st = std::min(st, {{ch[s[i] - 'a'], s[i]}, i});
        end = std::max(end, {{ch[s[i] - 'a'], s[i]}, i});
    }
    s[st.second] = s[end.second];

    std::cout << s << "\n";
    
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin>>t;
    while(t--)
    solve();
}
