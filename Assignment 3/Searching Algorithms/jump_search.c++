#include <bits/stdc++.h>
using namespace std;

// Jump search function
int jumpSearch(int arr[], int n, int key) {
    int step = sqrt(n);
    int left = 0;
    int right = 0;
    while (right < n && arr[right] < key) {
        left = right;
        right += step;
    }
    for (int i = left; i <= right && i < n; i++) {
        if (arr[i] == key) {
            return i;
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
    int num=0;
    sort(arr,arr+n);
    cout<<"\nEnter number to search: ";
    cin>>num;
    int ind=jumpSearch(arr,n,num);

    if(ind==-1){
        cout<<"\nNumber is Not present";
    }
    else{
        cout<<"\nNumber is present "<<endl;
    }
}

/**
 Output :
Enter number of elements in array: 5
Enter array elements: 34 23 564 23 12
Enter number to search: 43
Number is Not present

**/