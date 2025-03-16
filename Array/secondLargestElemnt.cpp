#include<bits/stdc++.h>
using namespace std ;

int main(){

    // int arr[] = {3,2,1,5,7,39,12,45,2} ;
    int arr[] = {2,2,2,2,2,2,2,2} ;
    int n = sizeof(arr)/sizeof(arr[0]);

    // Brute Force Approach
    // O(nlogn+n)
    // sort(arr,arr+n) ;
    // int max = arr[n-1] ;
    // int secondmax = -1 ;
    // for(int i=n-1 ; i>=0 ; i--){
    //     if(arr[i]!=max){
    //         secondmax = arr[i] ;
    //         break ;
    //     }
    // }
    // cout<<"Second Max element is: "<<secondmax ;

    // Better Approach
    // O(n+n) = O(2n)
    // // 1> find the max element 
    //     int max = INT_MIN ;
    //     for(int i=0 ; i<n ; i++){
    //         if(arr[i]>max){
    //             max = arr[i] ;
    //         }
    //     }
    // // 2> find second max element 
    //     int secondmax = INT_MIN ;
    //     for(int i=0 ; i<n ; i++){
    //         if(arr[i]>secondmax && arr[i]!=max){
    //             secondmax = arr[i] ;
    //         }
    //     }
    // cout<<"Second Max element is: "<<secondmax ;



    // Optimal Approach
    // O(n) 
    int max = arr[0] ;
    int secondmax = -1 ;

    for(int i=0 ; i<=n-1 ; i++){
        if(arr[i]>max){
            secondmax = max ;
            max = arr[i] ;
            cout<<secondmax<<endl  ;
        }else if(arr[i]<max && arr[i]>secondmax){
            secondmax = arr[i] ;
            cout<<"1"<<secondmax<<endl  ;
        }
    }

    cout<<"Second Max element is: "<<secondmax ;




    return 0 ;
}