#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        a[i] = i + 1;
    }
    
    if (k % 2 == 1) {
        // If k is odd, swap adjacent pairs
        for (int i = 0; i < n - 1; i += 2) {
            swap(a[i], a[i + 1]);
        }
    } else {
        // If k is even, no need to swap, as the sum is already minimized
        // Just ensure that a_i != i
        for (int i = 0; i < n; ++i) {
            if (a[i] == i + 1) {
                if (i == n - 1) {
                    swap(a[i], a[i - 1]);
                } else {
                    swap(a[i], a[i + 1]);
                }
            }
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}