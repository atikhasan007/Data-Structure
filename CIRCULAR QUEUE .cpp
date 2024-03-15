#include<bits/stdc++.h>
using namespace std;

#define mx_size 6

class Circular_Queue{

public:
   int arr[mx_size];
   int front;
   int back;
   int length;

   Circular_Queue(){
      front = 0;
      back = -1;
      length = 0;
   }

   bool is_empty(){
      if(length==0){
         return true;

      }
      else{
         return false;
      }
   }


void push(int x){
   if(length==mx_size){
      printf("Queue is Full !\n");
      return;
   }

   back = (back+1)%mx_size;
   arr[back] = x;
   length++;
   return;
}


void pop(){
   if(is_empty()){
      cout<<"Queue is Empty"<<endl;
      return;
   }

   front = (front+1)%mx_size;
   length--;
   return;
}


int Front(){
   if(is_empty()){
      cout<<"Queue is Empty"<<endl;
      return -1;

   }
   return arr[front];
}

int size(){
   return length;
}

};
 

int32_t main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);


   Circular_Queue cq;
   while(1){

      printf("1 for push\n");
      printf("2 for pop\n");
      printf("3 for see Front Element\n");

      int action;
      cin>>action;

      if(action==1){
         int x;
         cin>>x;
         cq.push(x);
      }


      else if(action==2){
         cq.pop();
      }

      else{
         cout<<cq.Front()<<endl;
      }

   }
   

   

   return 0;
}
