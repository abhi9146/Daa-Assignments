#include<bits/stdc++.h>
using namespace std;

#define n 10
int arr[n],st=-1,en=-1;

void push(int value){
   if(en == n-1)
      cout<<"\nQueue is Full";
   else{
      if(st == -1)
	  st = 0;
      en++;
      arr[en] = value;
      cout<<"\nNumber Added";
   }
}
void pop(){
   if(st == en)
      cout<<"\nQueue is Empty.";
   else{
      cout<<"\nDeleted :"<< arr[st]<<endl;
      st++;
      if(st == en)
	 st = en = -1;
   }
}
void print(){
   if(en == -1)
      cout<<"\nQueue is Empty!!!";
   else{
      int i;
      cout<<"\nQueue elements are:\n";
      for(i=st; i<=en; i++)
	    cout<<arr[i]<<" ";

     cout<<endl;
   }
}
// queue using array
int main(){
    bool fl=1;
    while(fl){
        cout<<"\nchoices :\n 1.Add\n 2.pop\n 3.print queue\n 4.print front\n 5.Exit\n";
        cout<<"Enter your choice : ";
        int x;cin>>x;
        switch (x)
        {
        case 1:
            cout<<"Enter Value to add :";
            int val;cin>>val;
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            print();
            break;
        case 4:
            cout<<"First element is: "<<arr[st]<<endl;
            break;
        case 5:
            fl=0;
            break;
        default:
            cout<<"Enter proper choice\n";
            break;
        }
    }
}