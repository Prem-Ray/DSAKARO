#include<bits/stdc++.h>
using namespace std ;

class Node{
    public:
        int data ;
        Node* next ;

    public:
        Node(int d , Node*n){
            data=d ;
            next=n ;
        }

    public:
        Node(int d){
            data=d ;
            next=nullptr ;
        }

};

 void printList(Node *head) {
        // your code goes here
        Node * temp = head ;
        cout<<endl ;
        while(temp){
            cout<<temp->data<<" " ;
            temp=temp->next ;
            // cout<<temp<<endl ;
            // temp = temp->next ;
            // cout<<temp<<endl ;
            // cout<<endl ;
        }
    }

Node* converttoLL(vector<int>&arr){
    // create the first node or head with the first element of the array
    Node * head = new Node(arr[0]) ;
    // mover is a helper pointer to build the list
    Node * mover = head ;

    for(int i=1 ; i<arr.size() ; i++){
        // create a temp node for the current element
        Node * temp = new Node(arr[i]) ;
        // create a link between previous node and current node
        mover->next=temp ;
        // mover assign to the current node because mover is a pointer 
        // for step forward we assign it
        mover=temp ;
    }

    printList(head) ;

    
    return head ;
}

Node * deletehead(Node*head){

    // there have no element in list
    if(head==NULL){
        return head ;
    }

    Node*temp = head ;
    head=head->next ;
    delete temp ;
    return head ;
}

Node* deletetail(Node*head){
    Node* temp = head ;

    if(head==NULL) return NULL ;

    if(head->next==NULL){
        delete head ;
        return NULL ;
    }

    while(temp->next->next!=NULL){
        temp=temp->next ;
    }

    delete temp->next ;
    temp->next=NULL ;

    return head ;
}



int main(){
    Node * y = new Node(5) ;
    vector<int>arr ={23,34,56,273,46,32} ;
    Node*head = converttoLL(arr) ;
    head = deletehead(head) ;
    printList(head) ;
    // cout<<head->data ;
    Node * tail = deletetail(head) ;
    printList(head) ;

    return 0 ;
}