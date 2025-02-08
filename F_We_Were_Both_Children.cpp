#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Frequency map for hop lengths
        unordered_map<int, int> freq;
        for (int x : a) {
            freq[x]++;
        }

        // Count the number of frogs for each x
        vector<int> count(n + 1, 0);
        for (auto& [d, cnt] : freq) {
            for (int x = d; x <= n; x += d) {
                count[x] += cnt;
            }
        }

        // Find the maximum count
        int maxFrogs = 0;
        for (int x = 1; x <= n; x++) {
            maxFrogs = max(maxFrogs, count[x]);
        }

        cout << maxFrogs << "\n";
    }

    return 0;
}