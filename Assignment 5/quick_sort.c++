#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r){
    int ele=arr[r];
    int ind=l-1;
    for(int i=l;i<r;i++){
        if(arr[i]<=ele){
            ind++;
            swap(arr[ind],arr[i]);
        }
    }
    swap(arr[ind+1],arr[r]);
    return ind;
}
void Quick_sort(int arr[], int l, int r) {
    if (l < r) {
        int partionInd=partition(arr,l,r);
        Quick_sort(arr, l, partionInd-1);
        Quick_sort(arr, partionInd + 1, r);
    }
}


int main(){
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<"Enter array elements: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     cout<<"Array elements After Sorting: ";
     Quick_sort(arr,0,n-1);
    for(auto x:arr){
        cout<<x<<" ";
    }
}

/** 
  Output:
  Enter number of elements in array: 5
Enter array elements: 23 454 12 45 1
Array elements After Sorting: 1 12 23 45 454

*/