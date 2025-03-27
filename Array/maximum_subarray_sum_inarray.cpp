#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector<int>arr = {-2,-3,4,-1,-2,1,5,-3} ;

    // BruteForce approach TC:O(n^2) SC:O(1) 
    // int maxi = INT_MIN ;
    // for(int i=0 ; i<arr.size() ; i++){
    //     int sum = 0 ;
    //     for(int j=i ; j<arr.size() ; j++){
    //         sum += arr[j] ;
    //         maxi = max(maxi , sum) ;
    //         cout<<maxi<<"   ->"<<i<<","<<j<<endl ;
    //     }
    // }
    // cout<<maxi ;



    // Optimal Approach TC:O(n) SC:O(1) 
    // Kadenes Alogrithm
    int maxi = INT_MIN ;
    int sum = 0 ;
    for(int i=0 ; i<arr.size() ; i++){
        sum += arr[i] ;
        maxi = max(maxi,sum) ;
        if(sum<0){
            sum = 0 ;
        }
    }
    cout<<maxi ;

    return 0 ;

}