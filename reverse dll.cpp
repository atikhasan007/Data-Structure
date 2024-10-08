#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node* prev;

public:
	Node(int data1, Node* next1, Node* prev1){
		data = data1;
		next = next1;
		prev = prev1;
	}

public:
	Node(int data1){
		data = data1;
		next = nullptr;
		prev = nullptr;
	}

};

Node* convert_array_to_d_ll(std::vector<int>arr){
	Node* head = new Node(arr[0]);
	Node* prev = head;

	for(int i=1;i<arr.size();i++){
		Node* temp = new Node(arr[i],nullptr,prev);
			prev->next = temp;
			prev = temp;
		
	}

	return head;

}


void print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}



Node* reverse_ll(Node* head){
	Node* temp = head;
	stack<int>st;


	while(temp!=NULL){
		st.push(temp->data);
		temp = temp->next;
	}
	temp = head;
	while(temp!=NULL){
		temp->data = st.top();
		st.pop();
		temp = temp->next;
	}
	return head;

}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
   

   vector<int>arr = {12,5,7,8};
   Node* head = convert_array_to_d_ll(arr);
    
      head = reverse_ll(head);
      print(head);
   


}



// time complexity O(2n);
// space complexity O(n);
