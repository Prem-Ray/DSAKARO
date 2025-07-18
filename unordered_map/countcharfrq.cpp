#include<bits/stdc++.h>
using namespace std ;

int main(){

    string str = "Hello World! This is a test string. Hello again!" ; 

    unordered_map<char,int>mpp ;

    for(auto it:str){
        // if(it != ' '){
            mpp[it]++ ;
        // }
    }

    for(auto it:mpp){
        cout<<it.first<<" : "<<it.second<<endl ;
    }

   

    
    return 0 ;
}