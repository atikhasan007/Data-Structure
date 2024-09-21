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

Node* convert_arr_to_link_list(std::vector<int>&arr){
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i=1;i<arr.size();i++){
                Node*  temp = new Node{arr[i]};
                mover->next = temp;
                mover = temp;
        }

        return head;


}

Node* remove_kth_element(Node* head, int k){
        if(head==NULL)return NULL;

        if(k==1){
                Node* temp =  head;
                head = head->next;
                free(temp);
                return head;
        }


        int cnt = 0;
        Node* prev = 0;
        Node* temp = head;
        while(temp!=NULL){
                cnt++;
                if(cnt==k){
                        prev->next = prev->next->next;
                        free(temp);
                        break;
                }
                prev = temp;
                temp = temp->next;

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


void print(Node* head){
        while(head!=NULL){
                cout<<head->data<<" ";
                head = head->next;
        }
        cout<<endl;
}

Node* remove_head(Node* head){
        if(head==NULL)return head;
        Node* temp = head;
        head  = head->next;
        delete temp;
        return head;



}


Node* remove_tail(Node* head){
        if(head == NULL || head->next == NULL)return NULL;
        Node* temp = head;
        while(temp->next->next !=NULL){
                temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        return head;
}


Node* remove_element(Node* head, int el) {
    // If the list is empty, return NULL
    if (head == NULL) return NULL;

    // If the element to be deleted is the head of the list
    if (head->data == el) {
        Node* temp = head;
        head = head->next;
        free(temp);  // Free the old head node
        return head;
    }

    // Initialize pointers for traversal
    Node* temp = head;
    Node* prev = NULL;

    // Traverse the list to find the element
    while (temp != NULL) {
        if (temp->data == el) {
            prev->next = temp->next;  // Bypass the node
            free(temp);  // Free the node's memory
            return head;
        }
        prev = temp;  // Move prev to current node
        temp = temp->next;  // Move to the next node
    }

    // Return the original head if element is not found
    return head;
}

Node* insert_head(Node* head, int val){
        Node* temp = new Node(val,head);
        return temp;
}

Node* insert_tail(Node* head, int val){
        if(head == NULL){
               return new Node(val);
        }
        Node* temp = head;
        while(temp->next !=NULL){
                temp = temp->next;
        }
        Node* newNode = new Node(val);
        temp->next = newNode;
        return head;
}


Node* insert_position(Node* head, int el , int k){
        if(head==NULL){
                if(k == 1){
                        return new Node(el);
                }
                else{
                        return head;
                }
        }


        if(k==1){
                return new Node(el,head);
        }

        int cnt = 0;
        Node* temp = head;
        while(temp!=NULL){
                cnt++;
                if(cnt==(k-1)){
                        Node* x = new Node(el,temp->next);

                        temp->next = x;
                        break;
                }
                temp = temp->next;
        }
        return head;
       

}

Node* insert_before_value(Node* head , int el, int val){
        if(head==NULL){
                return NULL;
        }

        if(head->data == val){
                return new Node(el,head);
        }

        Node* temp = head;
        while(temp->next != NULL){
             if(temp->next->data == val){
                        Node* x = new Node(el,temp->next);
                        temp->next = x;
                        break;
             }
              temp = temp->next;
        }

       return head;

}

int32_t main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        vector<int>arr = {2,5,8,7};
        Node* head = convert_arr_to_link_list(arr);
          head = insert_before_value(head,10,5);
          print(head);
        // print(head);
        // cout<<endl;
        // head = remove_element(head, 5);
        // print(head);

        // cout<<endl;
        // head = remove_kth_element(head,3);
        // print(head);
        // head = remove_head(head);
        // print(head);
        // head = remove_tail(head);
        // print(head);

        // head = insert_head(head, 100);
        // print(head);

        // head = insert_tail(head,200);
        // print(head);


        
return 0;
      
}





