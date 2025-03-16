#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector<int>arr = {13,46,24,52,20,9} ;

    int n = arr.size() ;

    cout<<"Array before sorting :\n" ;
    for(auto i:arr){
        cout<<i<<" " ;
    }
    cout<<endl ;

    for(int i=0 ; i<=n-2 ; i++){
        int min = i ;
        for(int j=i ; j<n ; j++){
            if(arr[j]<arr[min]){
                min = j ;
            }
        }
        int temp = arr[i] ;
        arr[i] =  arr[min] ;
        arr[min] = temp ;
    }

    cout<<"Array after sorting :\n" ;
    for(auto i:arr){
        cout<<i<<" " ;
    }


    return 0 ;
}