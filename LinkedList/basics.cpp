#include<bits/stdc++.h>
using namespace std ;


// struct Node{
// class Node{
//     public:
//         int data ;
//         Node * next ;

//     public: 
//         Node(int data1,Node* next1){
//             data=data1 ;
//             next=next1 ;
//         }
// };

class Node{
    public:
        int data ;
        Node* next ;

    public: 
        Node(int d1 , Node* n1){
            data = d1 ;
            next = n1 ;
        }

    public:
        Node(int d1){
            data = d1 ;
            next = nullptr ;
        }
};


int main(){

    Node * y = new Node(5) ;
    cout<<y<<endl ;
    cout<<y->data<<endl ;
    cout<<y->next<<endl ;

    vector<int>arr={3,4,6,7,8,9,12} ;
    // Node* y = new Node(arr[0],nullptr) ;
    // cout<<y->data<<endl ;
    // cout<<y->next<<endl ;
    // cout<<y<<endl ;
    cout<<endl ;
    // Node z= Node(arr[1],nullptr) ;
    // cout<<z.data<<endl ;
    // cout<<z.next<<endl ;
    // cout<<&z<<endl ;

    // Node * y = new Node(arr[0],nullptr) ;
    // cout<<y ;


    return 0 ;

}