#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
}; 

Node* convert_arr_to_LL(vector<int>arr) {
    int n = arr.size();

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < n; i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    cout<<"Head from arr = "<<head->data<<endl;

    return head;
}

Node* delete_head(Node* head) {
    Node* temp = head;
    head = head->next;

    delete(temp);

    return head;
}

Node* traversal_in_LL(Node* head) {
    Node* temp = head;

    while(temp) {
        cout<<temp->data;
        temp = temp->next;
    }

}

int main() {

    vector<int>arr = {0,1,2,3,4,5};

    Node* head = convert_arr_to_LL(arr);
    traversal_in_LL(head);
    
    head = delete_head(head);

    cout<<endl<<"Head ater Deletion : "<<head->data<<endl;
    traversal_in_LL(head);

    return 0;
}