#include <bits/stdc++.h>
using namespace std;

struct node {
   int data;
   struct node *prev;
   struct node *next;
};

struct node* head = NULL;

void insert(int val) {
   struct node* temp = (struct node*) malloc(sizeof(struct node));
   temp->data = val;
   temp->prev = NULL;
   temp->next = head;
   if(head != NULL)
   head->prev = temp ;
   head = temp;
}

void display() {
   struct node* ptr;
   ptr = head;
   while(ptr != NULL) { 
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}

int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The doubly linked list is: ";
   display();
   return 0;
}