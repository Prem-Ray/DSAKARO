#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector<int>nums = {2,2,3,4,4,2} ;

    unordered_map<int,int>mpp ;

    for(int i=0 ; i<nums.size() ; i++){
        mpp[nums[i]]++ ;
    }

    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl ;
    }

    int max_freq = INT_MIN ;
    int min_freq = INT_MAX ;
    int max_element = -1 ;
    int min_element = -1 ;
    for(auto it : mpp){
        // finding the max freq in the map
        if(it.second>max_freq){
            if(it.second==max_freq){
                max_element = max(it.first,max_element) ;
                max_freq = it.second ;
            }else{
                max_element = it.first ;
                max_freq = it.second ;
            }
        }
        
        // finding the min freq in the map
        if(it.second<min_freq){
            if(it.second == min_freq){
                min_element = min(it.first,min_freq) ;
                min_freq = it.second ;
            }else{
                min_element = it.first ;
                min_freq = it.second ;
            }
        }
    }
    
    cout<<"Max Frequency Element: "<<max_element<<" with frequency: "<<max_freq<<endl ;
    cout<<"Min Frequency Element: "<<min_element<<" with frequency: "<<min_freq<<endl ;


    return 0 ;
}