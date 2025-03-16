#include<iostream>
using namespace std ;

int main(){

    int m ;
    int n ;

    cout<<"Enter the row size: " ;
    cin>>m ;

    cout<<"Enter the column size: " ;
    cin>>n ;

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==0 || i==m-1 || j==0 || j==n-1){
                cout<<"3" ;
            }else{
                cout<<i ;
            }
        }
        cout<<endl ;
    }



    return 0 ;

}