#include <iostream>
#include <vector>
using namespace std;

long long merge(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    long long inv_count = 0;
    
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } 
        else {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1);
        }
    }
    
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    
    while (j <= right) {
        temp[k++] = arr[j++];
    }
    
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }
    
    return inv_count;
}

long long merge_and_count(vector<int>& arr, vector<int>& temp, int left, int right) {
    if (left >= right) return 0;
    
    int mid = left + (right - left) / 2;
    
    long long inv_count = merge_and_count(arr, temp, left, mid);
    inv_count += merge_and_count(arr, temp, mid + 1, right);
    
    inv_count += merge(arr, temp, left, mid, right);
    
    return inv_count;
}

void solve(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    vector<int> temp(n);
    long long result = merge_and_count(arr, temp, 0, n - 1);
    
    cout << result << "\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}
