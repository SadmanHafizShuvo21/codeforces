#include<bits/stdc++.h>
using namespace std;
// Partition function
int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}
// Quicksort function
void Quicksort(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr,low,high);
        Quicksort(arr,low,pi-1); // Left partition
        Quicksort(arr,pi+1,high);// Right partition
    }
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" \n"[i==n-1];
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Before Quicksort the array is: ";
    display(a,n);
    Quicksort(a,0,n-1);
    cout<<"Before Quicksort the array is: ";
    display(a,n);
}