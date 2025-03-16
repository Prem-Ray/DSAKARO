#include<bits/stdc++.h>
using namespace std ;

void printNum(int N){
    if(N==0) return ;
    
    cout<<N<<" step"<<endl ;
    printNum(N-1) ;

    cout<<N<<" " ;
}

int main(){

    int N ;

    cout<<"Enter your Number: ";
    cin>>N;

    printNum(N) ;


    return 0 ;
}