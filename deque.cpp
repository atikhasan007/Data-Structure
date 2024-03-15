#include<bits/stdc++.h>
using namespace std;
struct Node{

int data;
struct Node *prev;
struct Node *next; 
};


class DEque
{
public:
   Node *head;
   Node *tail;
   int length;

   DEque(){
    head = NULL;
    tail = NULL;
    length = 0 ;
   }
   
   bool is_empty(){
    if(length==0){
        return true;
    }
    else{
        return false;
    }
   }



void push_front(int x){
    Node *NewNode = (Node*)malloc(sizeof(struct Node));
    NewNode->data = x;
    NewNode->prev = NULL;
    NewNode->next = NULL;


    if(is_empty()){
        head = NewNode;
        tail = NewNode;
    }

    else{
        NewNode->next = head;
        head->prev = NewNode;
        head = NewNode;
    }

    length++;
    return;
}


void push_back(int x){
    Node *NewNode = (Node*)malloc(sizeof(struct Node));
    NewNode->data = x;
    NewNode->prev = NULL;
    NewNode->next = NULL;


    if(is_empty()){
        head = NewNode;
        tail = NewNode;
    }

    else{
        tail->next = NewNode;
        NewNode->prev = tail;
        tail = NewNode;
    }

    length++;
    return;

}

void pop_front(){
    if(is_empty()){
        cout<<"The DEque is empty"<<endl;
        return;
    }

    if(length==1){
        head = NULL;
        tail = NULL;
    }

    else{
        head = head->next;
        head->prev = NULL;
    }
    length--;
    return ;
}


void pop_back(){
    if(is_empty()){
        cout<<"The DEque is empty"<<endl;
        return;
    }
    if(length==1){
        head = NULL;
        tail = NULL;
    }

    else{
        tail = tail->prev;
        tail->next = NULL;

    }
    length--;
    return;
}



int front(){
    if(is_empty()){
        cout<<"The DEque is empty"<<endl;
        return -1;
    }

    return head->data;
}




int back(){
    if(is_empty()){
        cout<<"THe DEque is empty"<<endl;
        return -1;
    }
    return tail->data;
}



void Traversal(){
    if(is_empty()){
        cout<<"The DEque is empty"<<endl;
        return ;
    }

    Node *temp;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return ;
}

int size(){
    return length;
}

    
};


int32_t main(){
   DEque dq;

   while(1){
    cout<<"1 for push_front"<<endl;
    cout<<"2 for push_back"<<endl;
    cout<<"3 for pop_front"<<endl;
    cout<<"4 for pop_back"<<endl;
    cout<<"5 to see the front Element"<<endl;
    cout<<"6 to see tha back Element"<<endl;
    cout<<"7 to know the current size"<<endl;
    cout<<"8 for traversal"<<endl;
     
     int action;
     cin>>action;
     if(action==1){
        int x;
        cin>>x;
        dq.push_front(x);

     }
     else if(action==2){
        int x ;
        cin>>x;
        dq.push_back(x);
     }

     else if(action==3){
        dq.pop_front();
     }
     else if(action==4){
        dq.pop_back();
     }

     else if(action==5){
        dq.front();
     }

     else if(action==6){
        dq.back();
     }

     else if(action==7){
        dq.size();
     }
     else{
        dq.Traversal();
     }



   }

   return 0;

}
