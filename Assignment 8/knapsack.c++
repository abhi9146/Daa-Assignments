// #include <bits/stdc++.h>
// using namespace std;

//  int knapSack(vector<int>&val,int ind,vector<int>&wt,int capacity){
         
//         if(ind==0) 
//           if(wt[ind]<=capacity) return val[0];
//           else return 0;
        
//         int not_take=knapSack(val,ind-1,wt,capacity);
//         int take=0;
        
//         if(wt[ind]<=capacity) take=val[ind]+knapSack(val,ind-1,wt,capacity-wt[ind]);
        
//      return max(not_take,take);
//     }

// int main() {

//   int n;
//   cout<<"Enter number of items : ";
//   cin>>n;

//   int capacity=0;
//   cout<<"Enter knapsack Capacity : ";
//   cin>>capacity;
//   vector<int>value(n),weights(n);

//   cout<<"Enter jewelry value and its weight for each item :";
//   for(int i=0;i<n;i++){
//     cin>>value[i]>>weights[i];
//   }

//   cout << "Total knapsack profit = " << knapSack(value, n, weights, capacity) << endl;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
     string A,B,C;
     cin>>A>>B>>C;

     vector<int>map1(26,0),map3(26,0);\
     for(int i=0;i<A.size();i++){
         map1[A[i]-'a']++;
     } 
     for(int i=0;i<C.size();i++){
         map3[C[i]-'a']++;
     }
    bool flag=0;
     for(int i=0;i<26;i++){
      if(map1[i]>0 and map3[i]>0){
        cout<<1<<endl;
        flag=1;
        break;
      }
     }

     if(flag==0) cout<<0<<endl;
}