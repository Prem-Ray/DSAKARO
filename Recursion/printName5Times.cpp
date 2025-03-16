#include<bits/stdc++.h>
using namespace std ;

void printName(int count,string name){
    if(count == 5){
        return ;
    }
    cout<<name<<endl ;
    count++ ;
    printName(count,name) ;

}

int main(){

    string name ;
    cout<<"Enter Your Name: " ;
    getline(cin,name) ;
    int count=0 ;
    printName(count,name) ;

}

