#include<bits\stdc++.h>
using namespace std ;

int main(){

    vector<int>arr = {9,6,4,2,3,5,7,0,1} ;
    int n = arr.size() ;
    int xor1 = 0 ;
    int xor2 = 0 ;

    for(int i=0 ; i<=n ; i++){

        xor1 = xor1 ^ i ;
        if(i<=n-1){
            xor2 = xor2 ^ arr[i] ;
        }
    }

    int missingelement = xor1^xor2 ;
    cout<<missingelement<<endl ;


    return 0 ;

}