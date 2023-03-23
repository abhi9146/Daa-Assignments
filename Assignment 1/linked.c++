#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;   
};

struct node* head = NULL;

void Insert_at_end(){
      int val;
      cout<<"Enter Element to insert in linked list : "<<endl;
      cin>>val;
      struct node* temp=new node;
      
      temp->data=val;
      temp->next=NULL;

      struct node* ptr =head;
      if(ptr==NULL){
        head=temp;
      }
      else{
         while(ptr->next!=NULL){
         ptr=ptr->next;
      }
      ptr->next=temp;
      }
      return;
}

void Delete_from_end(){
     struct node* ptr =head;
     if(ptr->next==NULL){
         cout<<"Linked list is empty"<<endl;
     }
     else{
        while(ptr->next->next){
            ptr=ptr->next;
        }
        cout<<"Deleted element is: "<<ptr->next->data<<endl;
        ptr->next=NULL;
     }
     return;
}

void Display_linked_list(){
    cout<<"Linked list elements are: ";
    struct node* ptr =head;
    while(ptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

void Search(){
     int val;
     cout<<"Enter Element to Search : "<<endl;
     cin>>val;

     bool flag=false;
     struct node* ptr =head;
     while(ptr){
        if(ptr->data==val){
            flag=true;
        }
        ptr=ptr->next;
     }
     if(flag){
        cout<<"Element is present"<<endl;
     }
     else{
        cout<<"Element is not present"<<endl;
     }
}

int main(){
    cout<<"1) Insert at end"<<endl;
    cout<<"2) Delete from end"<<endl;
    cout<<"3) Display"<<endl;
    cout<<"4) Search"<<endl;
    cout<<"5) Exit"<<endl;

    bool flag=true;
   while(flag){
      int ch;
      cout<<"Enter your choice : ";
      cin>>ch;
      cout<<endl;
      switch (ch) {
         case 1: Insert_at_end();
                 break;
         case 2: Delete_from_end();
                 break;
         case 3: Display_linked_list();
                 break;
         case 4: Search();
                 break;
         case 5: cout<<"Exit"<<endl;
                 flag=false;
                 break;
         default: cout<<"Invalid choice"<<endl;
      }
   } 
   return 0;

}