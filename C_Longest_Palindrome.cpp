//07 Jan 2025
#include<bits/stdc++.h>
using ll = long long;

bool isPalindrome(const std::string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}
void solve(){
    std::string s;
    std::cin>>s;
    int l=s.size();
    int ans=1;
    for(int i=0;i<l;i++){
        for(int j = i + 1; j <= l; j++) {
            std::string substring = s.substr(i, j - i);
            if (isPalindrome(substring)) {
                ans = std::max(ans, j - i);
            }
        }
    }
    std::cout<<ans<<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // int t;
    // std::cin>>t;
    // while(t--)
    solve();
}

