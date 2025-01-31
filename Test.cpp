// //30 May 2024
// #include<bits/stdc++.h>
// using ll = long long;
// void solve(){
//     ll a,b;
//     std::cin>>a>>b;
//     if(a+b!=9){
//         std::cout<<9<<"\n";
//     }
//     else{
//         std::cout<<8<<"\n";
//     }
// }
// int main(){
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     // int testcase;
//     // std::cin>>testcase;
//     // while(testcase--)
//     solve();
// }
// #include <iostream>
// #include <string>
// using namespace std;

// void search(const string& pat, const string& txt) {
//     int M = pat.size();
//     int N = txt.size();

//     for (int i = 0; i <= N - M; i++) {
//         int j;
//         for (j = 0; j < M; j++) {
//             if (txt[i + j] != pat[j]) {
//                 break;
//             }
//         }
//         if (j == M) {
//             cout << "Pattern found at index " << i << endl;
//         }
//     }
// }

// int main() {
//     string txt = "AABAACAADAABAABA";
//     string pat = "AABA";
//     cout << "Example 1:" << endl;
//     search(pat, txt);

//     // You can add more examples here
//     // Example 2:
//     // string txt2 = "agd";
//     // string pat2 = "g";
//     // cout << "\nExample 2:" << endl;
//     // search(pat2, txt2);

//     return 0;
// }

// #include <iostream>
// #include <vector>

// int main() {
//     int n;
//     std::cin >> n;

//     // Check if a perfect permutation is possible
//     if (n % 2 == 1) {
//         std::cout << -1 << "\n"; // No perfect permutation exists for odd n
//         return 0;
//     }

//     // Construct the perfect permutation
//     std::vector<int> p(n);
//     for (int i = 0; i < n; i += 2) {
//         p[i] = i + 2;
//         p[i + 1] = i + 1;
//     }

//     // Print the permutation
//     for (int i = 0; i < n; ++i) {
//         std::cout << p[i] << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int array[] = {100, 80, 90, 100, 80, 60};
//     int number = sizeof(array) / sizeof(array[0]);

//     unordered_map<int, size_t> count; // Holds count of each encountered number

//     for (int i = 0; i < number; i++)
//         count[array[i]]++; // Increment the counter for the current value

//     // Display the result
//     for (const auto& e : count)
//         std::cout << e.first << " : " << e.second << " -> " << e.first / e.second << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
// };

// void printList(Node* n) {
//     while (n != nullptr) {
//         cout << n->data << " ";
//         n = n->next;
//     }
// }

// int main() {
//     Node* head = nullptr;
//     Node* second = nullptr;
//     Node* third = nullptr;

//     head = new Node();
//     second = new Node();
//     third = new Node();

//     head->data = 1;
//     head->next = second;

//     second->data = 2;
//     second->next = third;

//     third->data = 3;
//     third->next = nullptr;

//     printList(head);

//     // Free the allocated memory
//     delete head;
//     delete second;
//     delete third;

//     return 0;
// }

// #include <bits/stdc++.h>
// void solve() {
//     std::string s;
//     std::cin >> s;
//     if(s.size()<7){
//         std::cout << "NO\n";
//         return;
//     }
//     for (int i = 0; i <= s.size() - 7; i++) {
//         if (s.substr(i, 7) == "1111111" || s.substr(i, 7) == "0000000") {
//             std::cout << "YES\n";
//             return;
//         }
//     }
//     std::cout << "NO\n";
// }

// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//     solve();
//     return 0;
// }




