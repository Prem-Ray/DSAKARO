#include<bits/stdc++.h>
using namespace std ;

int main(){
    // how many times the items present or apperance in the array using hash table
    // here we are using a hash table to count the frequency of each element in the array
    vector<int>arr = {12,12,23,45,23,11,3,4,2,2,3,1,6,3,7,45,23,11,8} ;

    int hashh[46] = {0} ;

    for(int i=0 ; i<arr.size() ; i++){
        hashh[arr[i]]++ ;
    }

    for(int i=0 ; i<46 ; i++){
        if(hashh[i]>0){
            cout<<i<<" : "<<hashh[i]<<endl ;
        }
    }

    return 0 ;
}