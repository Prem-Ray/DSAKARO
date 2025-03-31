#include<bits\stdc++.h>
using namespace std ;

int main(){

    vector<int>arr = {3,1,-2,-5,2,-4} ;

    // Brute Force Approach TC:O(2n) SC:O(n)
    // vector<int>pos ;
    // vector<int>neg ;
    // for(int i=0 ; i<arr.size() ; i++){
    //     if(arr[i] >= 0){
    //         pos.push_back(arr[i]) ;
    //     }else{
    //         neg.push_back(arr[i]) ;
    //     }
    // }
    // for(int i=0 ; i<arr.size()/2 ; i++){
    //     arr[2*i] = pos[i] ;
    //     arr[2*i+1] = neg[i] ;
    // }

    // Better Approach TC:O(n) SC:O(n) 
    int n = arr.size() ;
    vector<int>ans(n,0) ;
    int pos=0 ;
    int neg=1 ;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>0){
            ans[pos] = arr[i] ;
            pos+=2 ;
        }else{
            ans[neg] = arr[i] ;
            neg+=2 ;
        }
    }
    cout<<"newarr:"<<endl ;
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" " ;
    }


    return 0 ;

}
