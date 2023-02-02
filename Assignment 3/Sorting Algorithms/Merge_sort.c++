#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }
    
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = L[i];
        i++;k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;k++;
    }
}

// Main function to sort the array using merge sort
void Merge_sort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        Merge_sort(arr, l, m);
        Merge_sort(arr, m + 1, r);
        merge(arr, l, m, r);
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
     Merge_sort(arr,0,n-1);
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