#include <bits/stdc++.h>
using namespace std;

struct node {
   int data;
   struct node *next;
};

struct node* start = NULL;
struct node* last = NULL;
struct node* temp;

void Insert() {
   int val;
   cout<<"Insert the element in queue : "<<endl;
   cin>>val;
   if (last == NULL) {
      last = (struct node *)malloc(sizeof(struct node));
      last->next = NULL;
      last->data = val;
      start = last;
   } else {
      temp=(struct node *)malloc(sizeof(struct node));
      last->next = temp;
      temp->data = val;
      temp->next = NULL;
      last = temp;
   }
}

void Delete() {
   temp = start;
   if (start == NULL) {
      cout<<"Underflow"<<endl;
      return;
   }
   else
   if (temp->next != NULL) {
      temp = temp->next;
      cout<<"Element deleted from queue is : "<<start->data<<endl;
      free(start);
      start = temp;
   } else {
      cout<<"Element deleted from queue is : "<<start->data<<endl;
      free(start);
      start = NULL;
      last = NULL;
   }
}

void Display() {
   temp = start;
   if ((start == NULL) && (last == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are: ";
   while (temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
}

int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;

   bool flag=true;
   while(flag){
      cout<<"Enter your choice : ";
      cin>>ch;
      cout<<endl;
      switch (ch) {
         case 1: Insert();
                 break;
         case 2: Delete();
                 break;
         case 3: Display();
                 break;
         case 4: cout<<"Exit"<<endl;
                 flag=false;
                 break;
         default: cout<<"Invalid choice"<<endl;
      }
   } 
   return 0;
}