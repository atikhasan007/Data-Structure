#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    int arr[1000000];
    int Top;
    Stack(){
        Top = -1;
    }


bool is_empty(){
    if(Top==-1){
        return true;
    }
    else{
        return false;
    }
}


void push(int x){
    Top++;

    arr[Top] = x;

    return;
}


void pop(){
    if(is_empty()){
        cout<<"The stack is empty now"<<endl;
        return;
    }
    Top--;
    return;
}

int top(){
    if(is_empty()){
        cout<<"the statck is is_empty"<<endl;
        return -1;
    }
    
        else {
          return  arr[Top];
        }
    

}



};

int32_t main(){
#define int long long 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Stack s;
    
 while(1){
    int action ;
   
     cin>>action;
     if(action==1){
        int x;
        cin>>x;
        s.push(x);
     }
     else if(action==2){
        s.pop();
     }
     else{
        cout<<s.top()<<endl;
     }

}
return 0;
}
