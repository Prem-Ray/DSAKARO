#include<bits\stdc++.h>
using namespace std ;

int main(){

    vector<int>arr = {1,2,3,1,1,1,1,4,2,3} ;

    int n = arr.size() ;
    int k = 4 ;
    int maxlen = 0 ;

    // // Brute Force Approach O(n^2)
    // for(int i=0 ; i<n ; i++){
    //     int sum = 0 ;
    //     for(int j=i ; j<n ; j++){
    //         sum += arr[j] ;
    //         if(sum == k){
    //             maxlen = max(maxlen,j-i+1) ;
    //         }
    //     }
    // }

    // // Better Approach O(n)
    // unordered_map<int,int>mp ;
    // long long sum = 0 ;

    // for(int i=0 ; i<n ; i++){
    //     sum += arr[i] ;
    //     if(sum == k){
    //         maxlen = max(maxlen,i+1) ;
    //     }

    //     long long rem = sum-k ;
    //     if(mp.find(rem) != mp.end()){
    //         maxlen = max(maxlen,i-mp[rem]) ;
    //     }

    //     if(mp.find(sum) == mp.end()){
    //         mp[sum] = i ;
    //     }
    // }


    // Optimal Approach  O(2n) for only positive and 0 

    int left = 0 ;
    int right = 0 ;

    int sum = arr[0] ;

    while(right<n){

        while(left<right && sum>k){
            sum = sum - arr[left] ;
            left++ ;
        }

        if(sum == k){
            maxlen = max(maxlen,right-left+1) ;
        }

        right++ ;
        if(right<n){
            sum += arr[right] ;
        }
    }

    cout<<"Longest Subarray: "<<maxlen<<endl ;


    return 0 ;

}