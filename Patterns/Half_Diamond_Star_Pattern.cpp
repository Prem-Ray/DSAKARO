#include<iostream>
using namespace std ;

int main(){

    int n ;
    cout<<"Enter n: " ;
    cin>>n ;

    for(int i=0 ; i<n ; i++){
        if(i<=n/2){
            for(int j=0 ; j<=i ; j++){
                cout<<"*" ;
            }
        }else{
            for(int j=0 ; j<n-i ; j++){
                cout<<"*" ;
            }
        }

        cout<<endl ;
    }

    // for(int i=0 ; i<n-1 ; i++){
    //     for(int j=0 ; j<=i ; j++){
    //         cout<<"*" ;
    //     }
    //     cout<<endl ;
    // }
    // for(int i=0 ; i<n ; i++){
    //     for(int j=0 ; j<n-i ; j++){
    //         cout<<"*" ;
    //     }
    //     cout<<endl ;
    // }


    return 0 ;

}