#include<bits/stdc++.h>
using namespace std;

#define MAX 10

  int arr[MAX];
  int front=-1;
  int rear=0;
  int size=0;

bool isFull() {
  return ((front == 0 && rear == size - 1) ||
      front == rear + 1);
}

bool isEmpty() {
  return (front == -1);
}

void Insert_at_front(int key) {
  if (isFull()) {
    cout << "Overflow\n"
       << endl;
    return;
  }

  if (front == -1) {
    front = 0;
    rear = 0;
  }

  else if (front == 0)
    front = size - 1;

  else
    front = front - 1;

  arr[front] = key;
  size++;
}

void Insert_at_rear(int key) {
  if (isFull()) {
    cout << " Overflow\n " << endl;
    return;
  }

  if (front == -1) {
    front = 0;
    rear = 0;
  }

  else if (rear == size - 1)
    rear = 0;

  else
    rear = rear + 1;

  arr[rear] = key;
  size++;
}

void Delete_from_front() {
  if (isEmpty()) {
    cout << "Queue Underflow\n"
       << endl;
    return;
  }

  if (front == rear) {
    front = -1;
    rear = -1;
  } else if (front == size - 1)
    front = 0;

  else
    front = front + 1;

    size--;
}

void Delete_from_rear() {
  if (isEmpty()) {
    cout << " Underflow\n"
       << endl;
    return;
  }

  if (front == rear) {
    front = -1;
    rear = -1;
  } else if (rear == 0)
    rear = size - 1;
  else
    rear = rear - 1;
    size--;
}

int getFront() {
  if (isEmpty()) {
    cout << " Underflow\n"
       << endl;
    return -1;
  }
  return arr[front];
}

int getRear() {
  if (isEmpty() || rear < 0) {
    cout << " Underflow\n"
       << endl;
    return -1;
  }
  return arr[rear];
}

int main() {
   int ch;
   cout<<"1) Insert element at front"<<endl;
   cout<<"2) Insert element at rear"<<endl;
   cout<<"3) Delete element from front"<<endl;
   cout<<"4) Delete element from rear"<<endl;
   cout<<"5) Display all the elements of queue"<<endl;
   cout<<"6) Exit"<<endl;

   bool flag=true;
   while(flag){
      cout<<"Enter your choice : ";
      cin>>ch;
      cout<<endl;
      switch (ch) {
         case 1: Insert_at_front();
                 break;
         case 2: Insert_at_rear();
                 break;
         case 3: Delete_from_front();
                 break;
         case 4: Delete_from_rear();
                 break;
         case 5: Display();
                 break;
         case 6: cout<<"Exit"<<endl;
                 flag=false;
                 break;
         default: cout<<"Invalid choice"<<endl;
      }
   } 
 }
