// Bubble sort Algorithm
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" \n"[i==n-1];
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int number;
    cin>>number;
    int arr[number];
    for(int i=0;i<number;i++){
        cin>>arr[i];
    }
    cout<<"Before Bubble sort the array is: ";
    display(arr,number);
    bubbleSort(arr,number);
    cout<<"After Bubble sort the array is: ";
    display(arr,number);
}