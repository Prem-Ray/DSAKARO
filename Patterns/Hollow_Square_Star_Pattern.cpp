#include<iostream>
using namespace std ;

int main(){

    int n ;
    cout<<"Enter the n: " ;
    cin>>n ;

    // for(int i=0 ; i<n ; i++){

    //     if(i==0 || i==n-1){
    //         for(int j=0 ; j<n ; j++){
    //             cout<<"*" ;
    //         }
    //     } else{
    //         for(int j=0 ; j<n ; j++){
    //             if(j==0 || j==n-1){
    //                 cout<<"*" ;
    //             }else{
    //                 cout<<" " ;
    //             }
    //         }
    //     }
    //     cout<<endl ;
    // }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"*" ;
            }
            else{
                cout<<" " ;
            }
        }
        cout<<endl ;
    }

    return 0 ;
}