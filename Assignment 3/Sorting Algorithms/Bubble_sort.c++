#include <bits/stdc++.h>
using namespace std;

// Bubble sort 
void bubble_Sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
      bool fl=0;
        for(int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
               swap(arr[j],arr[j+1]);
               fl=1;
            }
        }
        if(!fl) break;

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
    bubble_Sort(arr,n);
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