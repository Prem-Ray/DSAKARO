#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector<int>arr = {1,2,2,3,4,78,87,23,87,78} ;

    unordered_map<int,int>mpp ;

    for(auto it:arr){
        mpp[it]++ ;
    }

    for(auto it:mpp){
        cout<<it.first<<" : "<<it.second<<endl ;
    }



    return 0 ;
}