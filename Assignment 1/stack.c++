#include<bits/stdc++.h>
using namespace std;

#define n 10
int arr[n],top=-1;

void push(int value){
   if(top == n-1)
      cout<<"\nStack is Full!";
   else{
      top++;
      arr[top] = value;
      cout<<"\nNumber Added";
   }
}

void pop(){
   if(top == -1)
      cout<<"\nStack is Empty.";
   else{
      cout<<"\nDeleted : %d", arr[top];
      top--;
   }
}

void print(){
   if(top == -1)
      cout<<"\nStack Empty";
   else{
      int i;
      cout<<"\nStack elements are:\n";
      for(i=top; i>=0; i--)
	  cout<<"%d\n",arr[i];
   }
}
// Stack using array
int main(){
    bool fl=1;
    while(fl){
        cout<<"choices :\n 1.Add\n 2.pop\n 3.print stack\n 4.Exit\n";
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
            fl=0;
            break;
        default:
            cout<<"Enter Proper choice\n";
        }
    }
}

