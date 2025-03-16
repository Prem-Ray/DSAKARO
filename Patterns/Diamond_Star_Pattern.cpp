#include<iostream>
using namespace std ;

int main(){

    int n ;
    cout<<"Enter odd size: " ;
    cin>>n ;

    for(int i=0 ; i<n ; i++){
        if(i<=n/2){
            for(int j=0 ; j<(n/2)-i ; j++){
                cout<<" " ;
            }
            for(int j=0 ; j<2*i+1 ; j++){
                cout<<"*" ;
            }
        }else{
            for(int j=0 ; j<=i-(n/2)-1 ; j++){
                cout<<" " ;
            }
            for(int j=0 ; j<2*n-2*i-1 ; j++){
                cout<<"*" ;
            }
        }

        cout<<endl ;
    }



    return 0 ;

}