#include<iostream>
using namespace std ;

int main(){

    int n ; 
    cout << "Enter the number of rows: " ;
    cin >> n ;  

    int num=2 ;
    int temp ;
    int temp1 ;

    for(int i=1 ; i<=n ; i++){
            temp = num ;
            for(int j=1 ; j<=i ; j++){
                cout<<temp<<" " ;
                temp-- ;
            }
            num=num+i+1 ;
        
        cout<<endl ;
    }

    num=((n+1)*2)+1 ;
    for(int i=n ; i>=1 ; i--){
        for(int j=1 ; j<=i ; j++){
            cout<<num<<" " ;
            num-- ;
        }
        cout<<endl ; 
    }


    return 0 ;
}