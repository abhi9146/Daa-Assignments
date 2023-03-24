#include <iostream>
using namespace std;
void max_heapify(int *arr, int i, int n){
    int j, temp;
    temp = arr[i];
    j = 2 * i;
    while (j <= n){
        if (j < n && arr[j+1] > arr[j])
            j = j + 1;
        if (temp > arr[j])
            break;
        else if (temp <= arr[j])
        {
            arr[j / 2] = arr[j];
            j = 2 * j;
        }
    }
    arr[j/2] = temp;
    return;
}
void build_maxheap(int *arr,int n){
    for(int i = n/2; i >= 1; i--){
        max_heapify(arr,i,n);
    }
}

int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[20];
    cout<<"enter elements of array\n";
    for (int i = 1; i <= n; i++){
        cin>>arr[i];
    }
    build_maxheap(arr,n);
    cout<<"Max Heap\n";
    for (int i = 1; i <= n; i++){
        cout<<arr[i]<<" ";
    }
}

/*
Output : 
enter size of array : 5
enter elements of array
34 12 56 2 45
Max Heap
56 45 34 2 12
*/