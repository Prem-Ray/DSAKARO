#include<iostream>
using namespace std ;

int main(){

    int n ;
    cout<<"Enter the size: " ;
    cin>>n ;

    int num ;
    for(int i=n ; i>=1 ; i--){
        if(i%2==0){
            num= (i*(i+1))/2;
            for(int j=1 ; j<=i ; j++){
                cout<<num<<" " ;
                num-- ;
            }
        }else{
            num= ((i*(i-1))/2)+1;
            for(int j=1 ; j<=i ; j++){
                cout<<num<<" " ;
                num++ ;
            }
        }
        cout<<endl ;
    }
    


    return 0 ;

}