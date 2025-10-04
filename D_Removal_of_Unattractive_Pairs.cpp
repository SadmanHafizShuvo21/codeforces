#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; if(!(cin >> t)) return 0;
    while (t--) {
        int n; string s; 
        cin >> n >> s;
        string a; a.resize(n);
        int k = 0;
        for (char c : s) {
            if (k && a[k-1] != c) --k;
            else a[k++] = c;
        }
        cout << k << '\n';
    }
    return 0;
}
