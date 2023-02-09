#include <bits/stdc++.h>
using namespace std;

// Linear search function
int linearSearch(int arr[], int n, int num) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
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
    cout<<"\nEnter number to search: ";
    cin>>num;
    int ind=linearSearch(arr,n,num);

    if(ind==-1){
        cout<<"\nNumber is Not present";
    }
    else{
        cout<<"\nNumber is present at index: "<<ind+1<<endl;
    }
}

/**
 Output :
Enter number of elements in array: 5
Enter array elements: 34 23 564 23 12
Enter number to search: 43
Number is Not present

**/