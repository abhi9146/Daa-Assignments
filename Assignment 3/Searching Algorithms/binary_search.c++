#include <bits/stdc++.h>
using namespace std;

// Binary search function
int binarySearch(int arr[], int n, int num) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == num) {
            return mid;
        } else if (arr[mid] < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<"\nEnter array elements: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int num=0;
    cout<<"\nEnter number to search: ";
    cin>>num;
    int ind=binarySearch(arr,n,num);

    if(ind==-1){
        cout<<"\nNumber is Not present";
    }
    else{
        cout<<"\nNumber is present  "<<endl;
    }
}