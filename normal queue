#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
    int arr[10000];
    int front,back,length;

    Queue(){
        front = 0;
        back = -1;
        length = 0;
    }

    bool is_empty(){
        if(length==0){
            return true;
        }
        else return false;
    }

void push(int x){
    back++;
    arr[back] = x;
    length++;
    return;
}


void pop(){
    if(is_empty()){
        cout<<"The Queue is Empty.!."<<endl;
        return;
    }
    front++;
    length++;

}


int Front(){
    if(is_empty()){
        cout<<"The Queue is Empty"<<endl;
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


    Queue q;
    int nn;
      

    while(1){
      cout<<  "Enter 1 for Push"<<endl;
       cout<< "Enter 2 for pop"<<endl;
       cout<< "Enter 3 for see Front Element"<<endl;
       cout<< "Enter 4 for size"<<endl;

       int action;
       cin>>action;
       if(action==1){
        int x;
        cin>>x;
        q.push(x);
       }
       else if(action==2){
        q.pop();
       }
       else if(action==3){
        cout<<q.Front()<<endl;
       }
       else{
        cout<<q.size()<<endl;
       }


    }
    return 0;


}
