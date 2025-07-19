#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

struct Point {
    int x, y, idx;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<Point> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i].x >> points[i].y;
            points[i].idx = i + 1;
        }

        long long best_val = LLONG_MIN;
        vector<pair<int, int>> best_pairs;

        for (int s1 : {1, -1}) {
            for (int s2 : {1, -1}) {
                vector<pair<int, int>> arr;
                for (const auto& p : points) {
                    int t_val = s1 * p.x + s2 * p.y;
                    arr.emplace_back(t_val, p.idx);
                }
                sort(arr.begin(), arr.end());
                int half = n / 2;
                long long sum_low = 0, sum_high = 0;
                for (int i = 0; i < half; ++i) {
                    sum_low += arr[i].first;
                }
                for (int i = half; i < n; ++i) {
                    sum_high += arr[i].first;
                }
                long long total_val = sum_high - sum_low;
                if (total_val > best_val) {
                    best_val = total_val;
                    best_pairs.clear();
                    for (int i = 0; i < half; ++i) {
                        best_pairs.emplace_back(arr[i].second, arr[n - 1 - i].second);
                    }
                }
            }
        }

        for (const auto& p : best_pairs) {
            cout << p.first << " " << p.second << "\n";
        }
    }

    return 0;
}