#include<bits/stdc++.h>
using namespace std ;

void printNum(int num, int N){
    if(num==N+1) return ;
    cout<<num<<" " ;
    num++ ;
    printNum(num,N) ;
}

int main(){

    int num = 1 ;
    int N ;

    cout<<"Enter your Number: ";
    cin>>N;

    printNum(num,N) ;


    return 0 ;
}