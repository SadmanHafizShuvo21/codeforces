//Bubble Sort Algorithm
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

// Bubble sort algorithm
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                std::swap(arr[j],arr[j+1]);
            }
        }
    }
}
// Print Array
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" \n"[i==n-1];
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::cout<<"Input array is: ";
    printArray(a,n);

    bubbleSort(a,n);

    cout<<"Bubble sort array is: ";
    printArray(a,n);
}