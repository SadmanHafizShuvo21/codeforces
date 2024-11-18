//Binary Search
#include<bits/stdc++.h>
#include<iostream>

#define long long ll;

int binarySearch(int arr[], int x, int n){
    int low=0,high=n-1;
    
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;           
        }
    }
    return -1;
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" \n"[i==n-1];
    }
}

void solve(){
    int n,item;
    std::cin>>n>>item;
    int a[n];
    for(int i=0;i<n;i++){ //try to input array in sorted way or use sort stl to sort the array
        std::cin>>a[i];
    }
    
    std::sort(a,a+n);

    std::cout<<"After sorting the array: ";
    display(a,n);
    
    int result=binarySearch(a,item,n);

    if(result!=0){
        std::cout<<"Item is found in Array at index "<<result+1<<"\n";
    }
    else{
        std::cout<<"Item is not found in Array"<<"\n";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    solve();
}