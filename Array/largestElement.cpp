#include<bits/stdc++.h>
using namespace std ;

int main(){

    
    int arr[] = {3,2,1,5,7,12,45,2} ;
    int n = sizeof(arr)/sizeof(arr[0]);

    // Brute Force Approach 
    // T.C.: O(nlogn)
    // sort(arr,arr+n) ;
    // cout<<"Largest Element in Array: "<<arr[n-1] ;

    // Optimal Approach
    // T.C.: O(n)
    int max = INT_MIN ; 
    for(int i=0 ; i<n ; i++){
        if(arr[i]>max){
            max = arr[i] ;
        }
    }
    cout<<"Largest Element in Array: "<<max ;


    return 0 ;
}