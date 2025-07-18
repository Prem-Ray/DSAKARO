#include<bits/stdc++.h>
using namespace std ;

int main (){

    string str ="Hello World" ;

    // how many times the characters present or appearance in the string using hash table
    // here we are using a hash table to count the frequency of each character in the string
    int hashh[256] = {0} ;
    for(int i=0 ; i<str.size() ; i++){
        // ignore the space charcter
        if(str[i] != ' '){
            hashh[str[i]]++ ;
        }
    }

    // print the frequency of each and evry character
    for(int i=0 ; i<256 ; i++){
        if(hashh[i]>0){
            cout<<char(i)<<" : "<<hashh[i]<<endl ;
        }
    }


    return 0 ;

}