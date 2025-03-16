#include <bits/stdc++.h>
using namespace std; 

int main() {
    // map declaraion 
    map<int,int>mp ;
    int arr[]={1,2,3,4,3,4,6} ;
    for(int i=0 ; i<7 ; i++){
        mp[arr[i]]++ ;
    }
    for(auto i : mp){
        cout<<i.first<<"->"<<i.second<<endl ;
    }
    // 7 does not exist in map so it returns 0 ;
    cout<<"7->"<<mp[7] ;

    return 0;
}