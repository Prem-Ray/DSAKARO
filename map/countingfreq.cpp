#include <bits/stdc++.h>
using namespace std; 

int main() {
    // map declaraion 
    //vector<int>arr={2,3,2,3,5} ;
    vector<int>arr={2,1,1} ;
        int n=arr.size() ;
        // int max_val = *max_element(arr.begin(), arr.end());
        // vector<int>hashh(n, 0) ;

        unordered_map<int,int>mp ;
        vector<int>newarr(arr.size(),0) ;
        
        for(int i=0 ; i<arr.size() ; i++){
            mp[arr[i]]++ ;
            // hashh[arr[i]-1]++ ;
            // cout<<arr[i]<<" "<<hashh[arr[i]-1]<<endl ;
        }
        for(auto i:mp){
            newarr[i.first-1]=i.second ;
        }
        for(int i=0 ; i<newarr.size() ; i++){
            cout<<newarr[i]<<" " ;
        }
        cout<<endl ;
        for(auto i:mp){
            cout<<i.first<<" "<<i.second<<endl ;
        }
        // for(auto i:hashh){
        //     cout<<i<<" " ;
        // }
    

    return 0;
}