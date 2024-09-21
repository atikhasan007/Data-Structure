#include<bits/stdc++.h>
using namespace std;

class Node{
public:
        int data;
        Node* next;

public:
        Node(int data1, Node* next1){
                data = data1;
                next = next1;
        }

 public:
        Node(int data1){
                data = data1;
                next = nullptr;

        }

};

Node* convertArr2LL(std::vector<int>&arr){
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i=1;i<arr.size();i++){
                Node*  temp = new Node{arr[i]};
                mover->next = temp;
                mover = temp;
        }

        return head;


}

int length_of_link_list(Node* head){
        int cnt = 0;
        Node* temp = head;
        while(temp){
                temp = temp->next;
                cnt++;
        }
        return cnt;
}


int check_if_present(Node* head , int val){
        Node* temp  = head;
        while(temp){
                if(temp->data == val)return 1;
                temp = temp->next;
        }
        return 0;
}
int32_t main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        vector<int>arr = {2,5,8,7};
        
        Node* head = convertArr2LL(arr);
        Node* temp = head;
        while(temp){
                cout<<temp->data<<" ";
                temp = temp->next;
        }
  cout<<endl;
  cout<<length_of_link_list(head);
  cout<<endl;
  cout<<check_if_present(head,5)<<endl;
  cout<<check_if_present(head,1)<<endl;


}
