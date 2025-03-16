#include<bits/stdc++.h>
using namespace std ;

vector<long long >factorial(long long fact, long long i, long long n,vector<long long>ans){
    if(n==0) {
        return ans;
    }
    
    if((fact*i)<= n){
        ans.push_back(fact*i) ;
    }

    return factorial(fact*i,i+1,n-1,ans) ;
    
}


bool checkindex(char ch){
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
        return true ;
    }
    return false ;
}

// bool isPalindrome(string s,int l=0, int e=-1) {
    

//     string temp="" ;
//     for(int i=0 ; i<s.size() ; i++){
//         if(checkindex(s[i])) {
//             temp.push_back(tolower(s[i])) ;
//         }
//     }

//     cout<<temp ;
//     if(e==-1){
//         e=temp.size()-1 ;
    
//     }
//     while(l<e){
//         if(temp[l] != temp[e]){
//             cout<<endl<<temp[l]<<" "<<temp[e]<<endl ;
//             return false ;
//         }

//         l++ ;
//         e-- ;
//     }
//     return true ;
// }


bool isPalindrome(string s,int l=0, int e=-1) {
    

    string temp="" ;
    for(int i=0 ; i<s.size() ; i++){
        if(checkindex(s[i])) {
            temp.push_back(tolower(s[i])) ;
        }
    }

    if(e==-1){
        e=temp.size()-1 ;
    
    }
    if(l>=e){
        return true ;
    }
    if(temp[l] != temp[e]){
        return false ;
    }
    isPalindrome(temp,l+1,e-1) ;
    return true ;
}

int main(){

    long long n=4 ;
    vector<long long>ans ;
    // ans = factorial(1,1,5,ans) ;
    // cout<<"ans: ";

    // for(auto i:ans){
    //     cout<<i<<" " ;
    // }
    string s = "race a car" ;
    // for(int i=0 ; i<s.size() ; i++){
    //     s[i]=tolower(s[i]);
    //     cout<<s[i]<<"|" ;
    // }
    // cout<<endl ;
    // for(int i=0 ; i<s.size() ; i++){
    //     cout<<i<<"|" ;
    // }
    cout<<endl ;
    cout<<isPalindrome(s) ;
    return 0 ;
}

