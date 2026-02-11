#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long p, q;
        cin >> p >> q;

        long long kmax = min(p / 2, q / 3);
        if (kmax >= 1) cout << "Bob\n";
        else cout << "Alice\n";
    }
    return 0;
}
