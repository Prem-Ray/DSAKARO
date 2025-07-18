#include<bits\stdc++.h>
using namespace std ;



int main(){

    vector<int>arr = {1,2,1,2,1};
    int k=3 ;
    unordered_map<int,int>mpp ;
    // initialize the map with assuming there have a prefix sum 0 with it's occurence 1
    mpp[0] = 1 ;

    int prefixsum = 0 ;
    int count = 0 ;

    for(int i=0 ; i<arr.size() ; i++){
        // calculate the prefix sum
        prefixsum += arr[i] ;
        // calculate the remaining sum
        int remaining = prefixsum-k ;
        // if remaining not exists so it's value is 0 , if exists take it's value and add
        // with count to get the total occurences
        count += mpp[remaining] ;
        // update the prefix sum with incrementing ocuurence in the map
        mpp[prefixsum] +=1 ;
    }

    cout<<"Total occurence of subarray with sum "<<k<<" : "<<count<<endl ;

    return 0 ;

}