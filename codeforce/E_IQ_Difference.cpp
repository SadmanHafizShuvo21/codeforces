//12 July 2024
#include<bits/stdc++.h>
using ll = long long;
void solve(){
    int n, C;
    std::cin >> n >> C;

    std::vector<int> iq(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> iq[i];
    }

    sort(iq.begin(), iq.end());

    int teamCount = 0;
    std::vector<bool> used(n, false);

    for (int i = 0; i < n; ++i) {
        if (!used[i]) {
            for (int j = i + 1; j < n; ++j) {
                if (!used[j] && iq[j] - iq[i] <= C) {
                    for (int k = j + 1; k < n; ++k) {
                        if (!used[k] && iq[k] - iq[j] <= C) {
                            ++teamCount;
                            used[i] = used[j] = used[k] = true;
                            break;
                        }
                    }
                }
            }
        }
    }

    std::cout << teamCount <<"\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}



