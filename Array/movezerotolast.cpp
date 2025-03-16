#include<bits\stdc++.h>
using namespace std ;

int main(){

    // vector<int>arr = {1,0,2,3,2,0,0,4,5,1} ;
    // vector<int>temp ;
    // for(int i=0 ; i<arr.size() ; i++){
    //     if(arr[i] != 0){
    //         temp.push_back(arr[i]) ;
    //     }
    // }
    // int d = arr.size()-temp.size() ;
    // for(int i=0 ; i<d ; i++){
    //     temp.push_back(0) ;
    // }

    // for(int i=0 ; i<temp.size() ; i++){
    //     cout<<temp[i]<<" " ;
    // }



    // vector<int>nums= {1,6,8,0,2,0,1,2} ;
    vector<int>nums= {1} ;
    int j = -1 ;
    int n = nums.size() ;
    for(int i=0 ; i<n ; i++){
        if(nums[i] == 0){
            cout<<"\nchekc\n" ;
            j = i ;
            break ;
        }
        
    }
    
    if(j!=-1){
        // now we have the first 0 index ;
        for(int i=j+1 ; i<n ; i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j]) ;
                j++ ;
                cout<<"\nchekc1\n" ;
            }
        }
    }
    
    for(int i=0 ; i<n ; i++){
        cout<<nums[i]<<" " ;
    }
}