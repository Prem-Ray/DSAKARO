


#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {

    // step1 

    // int n = arr.size();

    // map<int, int> mpp;
    // for (int i = 0; i < n; i++) {
    //     mpp[arr[i]]++;
    // }

    // for(auto it:mpp){
    //     cout<<it.first<<" : "<<it.second<<endl ;
    // }

    // for (auto it : mpp) {
    //     if (it.second == 1)
    //         return it.first;
    // }

    // return -1;


    // step2
    int xor1 = 0 ;
    for(int i=0 ; i<arr.size() ; i++){
        xor1 = xor1^arr[i] ;
    }
    return xor1 ;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}

