#include <bits/stdc++.h>
using ll = long long;

struct Envelope {
    ll width, height, index;
};

bool compare(Envelope a, Envelope b) {
    if (a.width == b.width)
        return a.height < b.height;
    return a.width < b.width;
}

void solve(){
    ll n, w, h;
    std::cin >> n >> w >> h;
    
    std::vector<Envelope> envelopes;
    for (int i = 0; i < n; i++) {
        int wi, hi;
        std::cin >> wi >> hi;
        if (wi > w && hi > h) { 
            envelopes.push_back({wi, hi, i + 1});
        }
    }
    
    if (envelopes.empty()) {
        std::cout << 0 << "\n";
        return;
    }
    
    std::sort(envelopes.begin(), envelopes.end(), compare);
    
    ll m = envelopes.size();
    std::vector<ll> dp(m, 1), prev(m, -1);
    ll maxSize = 1, lastIndex = 0;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < i; j++) {
            if (envelopes[i].width > envelopes[j].width && envelopes[i].height > envelopes[j].height) {
                if (dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    prev[i] = j;
                }
            }
        }
        if (dp[i] > maxSize) {
            maxSize = dp[i];
            lastIndex = i;
        }
    }
    
    std::cout << maxSize << "\n";
    std::vector<ll> result;
    for (int i = lastIndex; i != -1; i = prev[i]) {
        result.push_back(envelopes[i].index);
    }
    
    std::reverse(result.begin(), result.end());
    for (int i=0;i<result.size();i++){
        std::cout << result[i] << " \n"[i==result.size()-1];
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
