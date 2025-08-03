#include<bits/stdc++.h>
using namespace std ;

class Node{

    public :
        int data ;
        Node* next ;
        // points to the previous node in the DLL
        Node* back ;

    public:
        Node(int d1 , Node* n1 , Node* b1){
            data = d1 ;
            next = n1 ;
            back = b1 ;
        }

    public:
        Node(int d1){
            data = d1 ;
            next = nullptr ;
            back = nullptr ;
        }

};

Node * convertTODoblyLL(vector<int>arr){
    Node * head = new Node(arr[0]) ;
    Node * prev = head ;

    for(int i=1 ; i<arr.size() ; i++){
        Node * temp = new Node(arr[i],nullptr,prev);
        prev->next = temp ;
        prev = temp ;
    }
    return head ;
}

void print(Node* head){
    Node * temp = head ;
    while(temp){
        cout<<temp->data<<" " ;
        temp = temp->next ;
    }
}

int main(){

    vector<int>arr = {3,45,67,23,56,23} ;
    Node * head = convertTODoblyLL(arr) ;
    print(head) ;

    return 0 ;

}