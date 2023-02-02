#include <bits/stdc++.h>
using namespace std;

// Selection sort 
void selection_Sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
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
    selection_Sort(arr,n);
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