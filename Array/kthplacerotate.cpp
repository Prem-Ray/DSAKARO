#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector<int>arr = {1,2,3,4,5,6,7,8} ;

    int d ;
    cout<<"Enter your kth element: " ;
    cin>>d ;
    int n = arr.size() ;
    d = d%n ;
    
    // process 1 
    // vector<int>temp ;
    // for(int i=0 ; i<=d-1 ; i++){
    //     temp.push_back(arr[i]) ;
    // }
    // cout<<"\n1st step: " ;
    // for(int i=0 ;i<temp.size() ; i++){
    //     cout<<temp[i]<<" " ;
    // }

    // for(int i=d ; i<=n-1 ; i++){
    //     arr[i-d] = arr[i] ;
    // }
    // cout<<"\n2nd step: " ;
    // for(int i=0 ;i<n ; i++){
    //     cout<<arr[i]<<" " ;
    // }

    // for(int i=n-d ; i<=n-1 ; i++){
    //     arr[i] = temp[i-(n-d)] ;
    // }
    // cout<<"\n3rd step & your Rotating array: " ;
    // for(int i=0 ;i<n ; i++){
    //     cout<<arr[i]<<" " ;
    // } 


    // process 2 
    reverse(arr.begin(), arr.begin() + d) ;
    reverse(arr.begin()+d , arr.end()) ;
    reverse(arr.begin(),arr.end()) ;
    cout<<"your rotating array: " ;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" " ;
    }



    return 0 ;

}