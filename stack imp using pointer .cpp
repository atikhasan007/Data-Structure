#include<bits/stdc++.h>
using namespace std;
#define int long long 


struct Node{
int data;
struct Node *next;

};


class Stack{
public:
     Node* Top;
     Stack(){
        Top = NULL;
     }


  bool is_empty(){
    if(Top==NULL){
        return true;
    }
    else{
        return false;
    }
  }


  void push(int x){
    struct Node *NewNode = (Node*)malloc(sizeof(struct Node));

    NewNode->data = x;
    NewNode->next = Top;
    Top = NewNode;
    return;
  }


int pop(){
    if(is_empty()){
        
        return;
    }

    Top = Top->next;
    return ;
    
}




int top(){
    if(is_empty()){
        cout<<"the stack is currently empty"<<endl;
        return -1;
    }
    else{
        return Top->data;
    }
}

    
};



int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

  Stack s;
  while(1){
    int action;
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
