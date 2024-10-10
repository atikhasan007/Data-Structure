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

Node* reverse_ll_temp(Node* head){
	if(head->next == NULL || head == NULL){
		return head;

	}

	Node* prev = NULL;
	Node* current_node = head;
	while(current_node!=NULL){
		prev = current_node->prev;
		current_node->prev = current_node->next;
		current_node->next = prev;
		current_node = current_node->prev;


	}
	return prev->prev;
}


int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
   

   vector<int>arr = {12,5,7,8};
   Node* head = convert_array_to_d_ll(arr);
    
      head = reverse_ll_temp(head);
      print(head);
   


}


