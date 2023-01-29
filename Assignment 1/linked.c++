#include<bits/stdc++.h>
using namespace std;

deque<int>dq;    

    void addAtHead(int val) {
        dq.push_front(val);
    }
    
    void addAtTail(int val) {
        dq.push_back(val);
    }
    
   void addAtIndex(int index, int val) {
    if(index>=0 && index<=dq.size()){
        dq.insert(dq.begin()+index,val);
    }
}
void deleteAtIndex(int index) {
    if(index>=0 && index<dq.size()){
        dq.erase(dq.begin()+index);
    }
}

void print(){
    for(auto x:dq){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    bool fl=1;
    while(fl){
        cout<<"\nchoices :\n 1.Insert at start\n 2.Insert at end\n 3.Insert at index\n4.Delete at index\n 5.print \n4.Exit\n";
        cout<<"Enter your choice : ";
        int x;cin>>x;
        switch (x)
        {
        case 1:
            cout<<"Enter Value to add :";
            int a;cin>>a;
            addAtHead(a);
            break;
        case 2:
            cout<<"Enter Value to add :";
            int b;cin>>b;
            addAtTail(b);
            break;
        case 3:
            cout<<"Enter Value and index to add :";
            int c,ind;cin>>c>>ind;
            addAtIndex(ind,c);
            break;
        case 4:
            cout<<"Enter index to delete : ";
            deleteAtIndex(ind);
            break;
        case 5:
            print();
            break;
        case 6:
            fl=0;
            break;
        default:
            cout<<"Enter proper choice\n";
            break;
        }
    }
}