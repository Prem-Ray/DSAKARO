#include<bits/stdc++.h>
using namespace std ;

int main(){
    
    vector<int>arr={10,5,10,15,10,5} ;
    vector<int>ans ;
    unordered_map<int,int>mp ;
    int max = INT_MIN ;
    int min = INT_MAX ;
    int maxpos ;
    int minpos ;

    for(int i=0  ; i<arr.size() ; i++){
        mp[arr[i]]++ ;
    }

    for(auto i:mp){
        if(i.second > max){
            max = i.second ;
            maxpos = i.first ;
        }
        if(i.second<min){
            min = i.second  ;
            minpos = i.first;
        }
    }

    ans.push_back(minpos);
    ans.push_back(maxpos) ;
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" " ;
    }


    return 0 ;
}