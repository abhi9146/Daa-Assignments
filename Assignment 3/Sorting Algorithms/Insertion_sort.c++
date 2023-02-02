#include <bits/stdc++.h>
using namespace std;


// Insertion sort 
void insertion_Sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
    insertion_Sort(arr,n);
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