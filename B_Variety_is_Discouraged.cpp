#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int initial_score = n - freq.size();
    int max_score = initial_score;
    pair<int, int> best_removal = {0, 0};

    for (int l = 0; l < n; l++) {
        map<int, int> temp_freq = freq;
        for (int r = l; r < n; r++) {
            temp_freq[a[r]]--;
            if (temp_freq[a[r]] == 0) temp_freq.erase(a[r]);
            
            int new_score = (n - (r - l + 1)) - temp_freq.size();
            if (new_score > max_score) {
                max_score = new_score;
                best_removal = {l + 1, r + 1};
            } else if (new_score == max_score && (r - l + 1) < (best_removal.second - best_removal.first)) {
                best_removal = {l + 1, r + 1};
            }
        }
    }
    
    if (best_removal.first == 0 && best_removal.second == 0)
        cout << "0\n";
    else
        cout << best_removal.first << " " << best_removal.second << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
