#include<bits/stdc++.h>
using namespace std ;

vector<int>merge(vector<int>& arr, int l, int m, int r){
    vector<int>temp ;
    int left = l ;
    int right = m+1 ;
    
    while((left<=m) && (right<=r)){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]) ;
            left++ ;
        }else{
            temp.push_back(arr[right]) ;
            right++ ;
        }
    }
    while(left<=m){
        temp.push_back(arr[left]) ;
        left++ ;
    }
    while(right<=r){
        temp.push_back(arr[right]) ;
        right++ ;
    }
    
    for(int i=l ; i<=r ; i++){
        cout<<i<<endl ;
        arr[i] = temp[i-l] ;
    }
    
}

void mergeSort(vector<int>& arr, int l, int r) {
    // code here
    
    // base case 
    if(l>=r) {
        return ;
    }
    
    // mid determination
    int m = (l+r)/2 ;
    // mergeSort from low to mid
    mergeSort(arr,l,m) ;
    
    // mergeSort from mid+1 to high
    mergeSort(arr,m+1,r) ;
    merge(arr,l,m,r) ;
    
}

int main(){

    vector<int>arr={3,4,2,5,1} ;
    mergeSort(arr,0,arr.size()-1) ;
    for(int i=0 ; i<arr.size() ; i++){
        cout<<arr[i]<<" " ;
    } 

    return 0 ;
}