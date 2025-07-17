#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    // Iterate over possible median values
    for (int v = 1; v <= 100; v++) {
        int less = 0;  // Count of elements < v
        int leq = 0;   // Count of elements <= v
        deque<int> dq; // Deque to maintain indices of elements in decreasing order
        int l = 0;     // Left boundary of the window

        for (int r = 0; r < n; r++) {
            // Update counts based on the new element a[r]
            if (a[r] < v) less++;
            if (a[r] <= v) leq++;

            // Maintain deque for minimum value
            while (!dq.empty() && dq.front() < l) dq.pop_front();
            while (!dq.empty() && a[dq.back()] > a[r]) dq.pop_back();
            dq.push_back(r);

            // Current window length
            int k = r - l + 1;
            // Median position: ceil((k+1)/2)
            int p = (k + 1 + (k % 2 == 0)) / 2;

            // Adjust window if v cannot be the median
            while (l <= r && (less >= p || leq < p)) {
                if (a[l] < v) less--;
                if (a[l] <= v) leq--;
                l++;
                k = r - l + 1;
                p = (k + 1 + (k % 2 == 0)) / 2;
                while (!dq.empty() && dq.front() < l) dq.pop_front();
            }

            // If the window is valid, update the answer
            if (l <= r) {
                int min_val = a[dq.front()];
                ans = max(ans, v - min_val);
            }
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}