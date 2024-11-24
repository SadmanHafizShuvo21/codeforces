#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> points(n);
        unordered_map<int, int> x_count, y_count;

        for (int i = 0; i < n; ++i) {
            cin >> points[i].first >> points[i].second;
            x_count[points[i].first]++;
            y_count[points[i].second]++;
        }

        long long right_triangles = 0;
        for (const auto& point : points) {
            int x = point.first;
            int y = point.second;
            right_triangles += (x_count[x] - 1) * (y_count[y] - 1);
        }
        if(right_triangles==0)
        cout << right_triangles << endl;
        else
        cout << right_triangles+1 << endl;
    }
    return 0;
}
