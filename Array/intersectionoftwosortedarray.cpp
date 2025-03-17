#include<bits\stdc++.h>
using namespace std ; 

int main(){

    vector<int>arr = {1,2,2,3,4,5,6,7,7} ;
    vector<int>brr = {2,2,3,7,7,8,9,10} ;

    vector<int>ans ;

    int i=0 ;
    int j=0 ;

    while(i<arr.size() && j<brr.size()){
        if(arr[i] == brr[j]){
            ans.push_back(arr[i]) ;
            i++ ;
            j++ ;
        }
        else if(arr[i] < brr[j]){
            i++ ;
        }
        else {
            j++ ;
        }
    }

    for(auto i:ans){
        cout<<i<<" " ;
    }

    return 0 ;

}