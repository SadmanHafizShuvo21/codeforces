#include <bits/stdc++.h>
using ll = long long;

void solve() {
    int q;
    std::cin >> q;
    std::map<std::string, int> student_marks;

    while (q--) {
        int type;
        std::string name;
        std::cin >> type >> name;

        if (type == 1) {
            int marks;
            std::cin >> marks;
            student_marks[name] += marks;
        } 
        else if (type == 2) {
            student_marks.erase(name);
        } 
        else{
            std::cout << student_marks[name] << "\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
