#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {0,1,2,3,4,5,8,6,7,9};

    int n = v.size() ;

    vector<int>hassh(n+1,0) ;

    for(int i=0 ; i<n ; i++){
        hassh[v[i]] = 1 ;
    }
    int missingElement = -1;
    for(int i=0 ; i<=n ; i++){
        if(hassh[i] != 1 ){
            missingElement = i ;
            break ;
        }
    }

    cout<< "Missing Element is: " << missingElement << endl;

    return 0 ;

}